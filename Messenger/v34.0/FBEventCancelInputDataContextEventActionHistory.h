/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:14 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBEventCancelInputDataContextEventActionHistory : FBGraphQLInput {

	NSString* _surface;
	NSString* _mechanism;
	NSString* _extraData;
	NSString* _eventTracking;

}

@property (nonatomic,copy) NSString * surface;                    //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy) NSString * mechanism;                  //@synthesize mechanism=_mechanism - In the implementation block
@property (nonatomic,copy) NSString * extraData;                  //@synthesize extraData=_extraData - In the implementation block
@property (nonatomic,copy) NSString * eventTracking;              //@synthesize eventTracking=_eventTracking - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setSurface:(NSString *)arg1 ;
-(NSString *)mechanism;
-(void)setMechanism:(NSString *)arg1 ;
-(NSString *)eventTracking;
-(void)setEventTracking:(NSString *)arg1 ;
-(void)setExtraData:(NSString *)arg1 ;
-(NSString *)extraData;
-(NSString *)surface;
@end

