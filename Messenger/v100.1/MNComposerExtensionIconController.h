/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@class MNTabBarExtensionIconView, FBImageDownloader, NSString;

@interface MNComposerExtensionIconController : NSObject <FBClassProvidable> {

	MNTabBarExtensionIconView* _iconView;
	FBImageDownloader* _imageDownloader;
	BOOL _isComposerBarPlatformIcon;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithImageDownloader:(id)arg1 ;
-(void)didDisappear;
-(void)awakeWithView:(id)arg1 ;
-(void)_didLoadNormalImageWithResponse:(id)arg1 ;
-(void)_addBackgroundForSelectedImage;
-(void)_didDownloadImageWithResponse:(id)arg1 icon:(id)arg2 ;
-(void)_didLoadSelectedlImageWithResponse:(id)arg1 ;
-(void)_addStrokeImageForSelectedImage;
-(void)willAppearWithTabBarItem:(id)arg1 location:(long long)arg2 shouldToggleIconSource:(BOOL)arg3 ;
@end
