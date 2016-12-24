/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:37 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface GADAutoClickProtection : NSObject {

	NSArray* _reportingURLStringTemplates;
	BOOL _enabled;

}

@property (nonatomic,readonly) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)reportSpamOpenActionWithNavigationURLString:(id)arg1 ;
-(id)initWithAutoClickProtectionEnabled:(BOOL)arg1 ;
-(void)reportSpamOpenActionWithAdDebugDialogString:(id)arg1 navigationURLString:(id)arg2 ;
-(BOOL)enabled;
-(id)initWithDictionary:(id)arg1 ;
@end
