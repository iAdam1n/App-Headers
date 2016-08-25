/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface ADJSessionSuccess : NSObject <NSCopying> {

	NSString* _message;
	NSString* _timeStamp;
	NSString* _adid;
	NSDictionary* _jsonResponse;

}

@property (nonatomic,copy) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * timeStamp;                       //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,copy) NSString * adid;                            //@synthesize adid=_adid - In the implementation block
@property (nonatomic,retain) NSDictionary * jsonResponse;              //@synthesize jsonResponse=_jsonResponse - In the implementation block
+(id)sessionSuccessResponseData;
-(NSDictionary *)jsonResponse;
-(NSString *)adid;
-(void)setAdid:(NSString *)arg1 ;
-(void)setJsonResponse:(NSDictionary *)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)timeStamp;
-(void)setTimeStamp:(NSString *)arg1 ;
@end

