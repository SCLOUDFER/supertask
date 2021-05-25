Vagrant.configure("2") do |config|

  config.vagrant.plugins = ["vagrant-vbguest"]

  config.vm.box = "bento/ubuntu-20.04"
  config.vm.network "public_network"
  config.vm.synced_folder('shared', '/vagrant', type: 'rsync')

  config.vm.provider "virtualbox" do |vb|
    vb.gui = true
    vb.memory = "2048"
  end

  config.vm.provision "shell", inline: $script, privileged: true

  config.ssh.extra_args = "-tt"

end