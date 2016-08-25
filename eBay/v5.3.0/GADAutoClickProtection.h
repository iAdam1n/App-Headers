/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
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

