/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBOmnistore : NSObject {

	unique_ptr<facebook::omnistore::Omnistore, std::__1::default_delete<facebook::omnistore::Omnistore> >* _omnistore;

}
+(void)_logOmnistoreAvailability:(BOOL)arg1 ;
+(id)newDummyOmnistore;
+(id)newOmnistoreWithFile:(id)arg1 ;
+(id)newOmnistoreWithFile:(id)arg1 mqttClientManager:(id)arg2 notificationCenter:(CFNotificationCenterRef)arg3 ;
-(id)initWithOmnistore:(unique_ptr<facebook::omnistore::Omnistore, std::__1::default_delete<facebook::omnistore::Omnistore> >*)arg1 ;
-(BOOL)_isOmnistoreAvailable;
-(id)subscribeCollection:(id)arg1 ;
-(void)addDeltaReceivedCallback:(/*^block*/id)arg1 ;
-(void)setCollectionIndexerFunction:(/*^block*/id)arg1 ;
-(void)start;
-(BOOL)remove;
@end

