/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <TestFlight/TestFlight-Structs.h>
@class NSString, NSArray;

@interface OASServerResponsePairedDevice : NSObject {

	NSString* _UDID;
	NSArray* _profiles;

}

@property (nonatomic,retain) NSString * UDID;                 //@synthesize UDID=_UDID - In the implementation block
@property (nonatomic,retain) NSArray * profiles;              //@synthesize profiles=_profiles - In the implementation block
+(id)pairedDeviceFromDictionary:(id)arg1 ;
-(void)setUDID:(NSString *)arg1 ;
-(void)setProfiles:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UDID;
-(NSArray *)profiles;
@end

