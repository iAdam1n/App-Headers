/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol MNMQTTSending;
@class NSString;

@interface MNOnlineStatusMQTTSender : NSObject <FBClassProvidable> {

	id<MNMQTTSending> _sender;

}

@property (nonatomic,retain) id<MNMQTTSending> sender;              //@synthesize sender=_sender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithMQTTSender:(id)arg1 ;
-(void)sendShowOnline:(BOOL)arg1 ;
-(id<MNMQTTSending>)sender;
-(void)setSender:(id<MNMQTTSending>)arg1 ;
@end

