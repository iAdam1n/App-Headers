/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNMQTTPresenceUpdateListening.h>

@class NSString;

@interface MNMQTTPresenceUpdateListeningAnnouncer : FBAnnouncerBase <MNMQTTPresenceUpdateListening>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceievePresenceUpdateWithValues:(id)arg1 wasFull:(BOOL)arg2 isSpecificPresence:(BOOL)arg3 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
