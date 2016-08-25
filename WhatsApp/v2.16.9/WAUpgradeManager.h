/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAUpgradeCallback.h>

@class NSString;

@interface WAUpgradeManager : NSObject <WAUpgradeCallback>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2 ;
+(void)checkForUpgrade;
+(id)previousAppVersion;
+(void)notifyListenersOfUpgradeFrom:(id)arg1 to:(id)arg2 ;
+(id)classesToNotifyDuringUpgrade;
@end

