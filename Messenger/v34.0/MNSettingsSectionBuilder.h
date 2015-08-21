/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:02 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, NSArray;

@interface MNSettingsSectionBuilder : NSObject {

	NSString* _footerText;
	NSArray* _settingsItems;
	NSArray* _settingsItemCallbacks;
	NSRange _linkRange;

}
+(id)settingsSection;
+(id)settingsSectionFromExistingSettingsSection:(id)arg1 ;
-(id)withFooterText:(id)arg1 ;
-(id)withSettingsItems:(id)arg1 ;
-(id)withSettingsItemCallbacks:(id)arg1 ;
-(id)withLinkRange:(NSRange)arg1 ;
-(id)build;
@end

