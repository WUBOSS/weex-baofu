# coding: utf-8

Pod::Spec.new do |s|
  s.name         = "WeexBaofu"
  s.version      = "0.0.1"
  s.summary      = "Weex baofu"

  s.description  = <<-DESC
                   Weexplugin 宝付
                   DESC

  s.homepage     = "https://github.com/WUBOSS/weex-baofu"
  s.license = {
    :type => 'MIT',
    :text => <<-LICENSE
            copyright
    LICENSE
  }
  s.authors      = {
                     "WUBOSS" =>"10542588896@qq.com"
                   }
  s.platform     = :ios
  s.ios.deployment_target = "7.0"

  s.source       = { :git => 'https://github.com/WUBOSS/weex-baofu.git', :tag => '0.0.1' }
  s.source_files  = "ios/Sources/*.{h,m,mm}"
  s.vendored_frameworks = 'ios/Sources/BaofooWebchatPaySDK.framework'
  s.vendored_libraries = 'libSPaySDK.a'
  s.requires_arc = true
  s.dependency "WeexPluginLoader"
  s.dependency "WeexSDK"
  s.dependency "ShareSDK3/ShareSDKPlatforms/WeChat"
  s.dependency "ShareSDK3"
  s.dependency  'MBProgressHUD', '~> 0.9.1'
  s.dependency 'libqrencode', '~> 3.4.2'
  s.resource = 'ios/Sources/SPaySDKResource/bundle'
end
