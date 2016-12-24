/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNMessagesSyncAppAttributionVisibility : NSObject <TBase, NSCoding> {

	BOOL __hideAttribution;
	BOOL __hideInstallButton;
	BOOL __hideReplyButton;
	BOOL __disableBroadcasting;
	BOOL __hideAppIcon;
	BOOL __hideAttribution_isset;
	BOOL __hideInstallButton_isset;
	BOOL __hideReplyButton_isset;
	BOOL __disableBroadcasting_isset;
	BOOL __hideAppIcon_isset;

}

@property (assign,setter=setHideAttribution:,getter=hideAttribution,nonatomic) BOOL hideAttribution; 
@property (assign,setter=setHideInstallButton:,getter=hideInstallButton,nonatomic) BOOL hideInstallButton; 
@property (assign,setter=setHideReplyButton:,getter=hideReplyButton,nonatomic) BOOL hideReplyButton; 
@property (assign,setter=setDisableBroadcasting:,getter=disableBroadcasting,nonatomic) BOOL disableBroadcasting; 
@property (assign,setter=setHideAppIcon:,getter=hideAppIcon,nonatomic) BOOL hideAppIcon; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hideAppIcon;
-(void)read:(id)arg1 ;
-(BOOL)hideAttribution;
-(BOOL)hideInstallButton;
-(BOOL)hideReplyButton;
-(void)setHideAppIcon:(BOOL)arg1 ;
-(void)setHideAttribution:(BOOL)arg1 ;
-(void)setHideInstallButton:(BOOL)arg1 ;
-(void)setHideReplyButton:(BOOL)arg1 ;
-(void)setDisableBroadcasting:(BOOL)arg1 ;
-(id)initWithHideAttribution:(BOOL)arg1 hideInstallButton:(BOOL)arg2 hideReplyButton:(BOOL)arg3 disableBroadcasting:(BOOL)arg4 hideAppIcon:(BOOL)arg5 ;
-(BOOL)hideAttributionIsSet;
-(void)unsetHideAttribution;
-(BOOL)hideInstallButtonIsSet;
-(void)unsetHideInstallButton;
-(BOOL)hideReplyButtonIsSet;
-(void)unsetHideReplyButton;
-(BOOL)disableBroadcasting;
-(BOOL)disableBroadcastingIsSet;
-(void)unsetDisableBroadcasting;
-(BOOL)hideAppIconIsSet;
-(void)unsetHideAppIcon;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end
