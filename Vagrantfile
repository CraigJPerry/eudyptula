# -*- mode: ruby -*-
# vi: set ft=ruby :

VAGRANTFILE_API_VERSION = "2"

Vagrant.configure(VAGRANTFILE_API_VERSION) do |config|
  config.vm.provision "ansible" do |ansible|
    ansible.playbook = "provisioning/playbook.yml"
  end
  config.vm.define :ubuntu12_04lts do |ubuntu12_04lts|
    ubuntu12_04lts.vm.box = "hashicorp/precise32"
    ubuntu12_04lts.vm.provider "virtualbox" do |virtualbox|
      virtualbox.name = "ubuntu12_04lts-eudyptula"
    end
  end
end

