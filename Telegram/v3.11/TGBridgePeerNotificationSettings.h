/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface TGBridgePeerNotificationSettings : NSObject <NSCoding> {

	int _muteFor;

}

@property (assign,nonatomic) int muteFor;              //@synthesize muteFor=_muteFor - In the implementation block
+(id)peerNotificationSettingsWithTGPeerNotificationSettings:(id)arg1 currentTime:(int)arg2 ;
+(id)tgPeerNotificationSettingsWithpeerNotificationSettingsWithBridgePeerNotificationSettings:(id)arg1 currentTime:(int)arg2 ;
-(int)muteFor;
-(void)setMuteFor:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
