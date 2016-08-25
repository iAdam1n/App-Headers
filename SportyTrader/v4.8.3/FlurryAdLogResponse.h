/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@class NSString, NSArray;

@interface FlurryAdLogResponse : NSObject {

	avro_obj_t* _adLogResponseSchema;
	NSString* _result;
	NSArray* _errors;

}

@property (nonatomic,retain) NSString * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSArray * errors;               //@synthesize errors=_errors - In the implementation block
-(void)initSchema;
-(id)parseAdLogResponse:(id)arg1 ;
-(BOOL)isResultSuccess;
-(void)dealloc;
-(NSString *)result;
-(void)setResult:(NSString *)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
-(NSArray *)errors;
@end

