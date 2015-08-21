/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBPlatformActionOperation.h>

@class NSString;

@interface FBPlatformActionFetchPlaceOperation : FBPlatformActionOperation {

	NSString* _placeFBID;
	NSString* _placeName;

}

@property (nonatomic,copy,readonly) NSString * placeFBID;              //@synthesize placeFBID=_placeFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeName;              //@synthesize placeName=_placeName - In the implementation block
+(unsigned long long)cachedResponseThreshold;
-(NSString *)placeFBID;
-(id)defaultErrorMessage;
-(id)initWithAction:(id)arg1 placeFBID:(id)arg2 ;
-(void)process;
-(id)initWithAction:(id)arg1 ;
-(NSString *)placeName;
@end

