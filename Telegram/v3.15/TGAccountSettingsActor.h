/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGActor.h>

@class TGAccountSettings;

@interface TGAccountSettingsActor : TGActor {

	BOOL _accountTtlReceived;
	BOOL _privacySettingsReceived;
	BOOL _groupsAndChannelsSettingsReceived;
	BOOL _callSettingsReceived;
	TGAccountSettings* _accountSettings;

}
+(id)genericPath;
+(void)setAccountSettingsForCurrentStateId:(id)arg1 ;
+(id)accountSettingsFotCurrentStateId;
+(id)accountSettingsForStateIdDict;
+(id)accountSettingsForStateId:(int)arg1 ;
+(void)setAccountSettingsForStateId:(int)arg1 accountSettings:(id)arg2 ;
+(void)load;
-(void)_maybeComplete;
-(void)accountTtlRequestSuccess:(id)arg1 ;
-(void)accountTtlRequestFailed;
-(void)privacySettingsRequestSuccess:(id)arg1 ;
-(void)privacySettingsRequestFailed;
-(void)groupsAndChannelsSettingsRequestSuccess:(id)arg1 ;
-(void)groupsAndChannelsSettingsRequestFailed;
-(void)callSettingsRequestSuccess:(id)arg1 ;
-(void)callSettingsRequestFailed;
-(void)execute:(id)arg1 ;
-(void)prepare:(id)arg1 ;
@end
