$script = <<-SCRIPT
apt install -yy gcc g++ cmake git vim
mkdir -p ~/workspace/supertask
cd ~/workspace/supertask
git clone https://github.com/byteihq/rk3
cmake -H. -B_build -DCMAKE_INSTALL_PREFIX=_install -DBUILD_TESTS=ON
cmake --build _build --target install
SCRIPT

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