#!/usr/bin/groovy
node('docker') {
  stage('Build Docker image') {
    def image = "harbor.irtsysx.fr/top/vegairt:1.0"
    checkout([$class: 'GitSCM', branches: [[name: '*/$GIT_BRANCH']], doGenerateSubmoduleConfigurations: false, extensions: [], submoduleCfg: [], userRemoteConfigs: [[credentialsId: PULL_KEY, url: GIT_URL]]])
    sh "pwd"
    sh "ls"
    sh "whoami"
    container('docker') {
      sh "echo hello from docker"
      sh "pwd"
      sh "ls"
      sh "whoami"
      sh "docker build -t ${image} -f Dockerfile_jenkins ."
      sh "docker push ${image}"
    }
  }
}