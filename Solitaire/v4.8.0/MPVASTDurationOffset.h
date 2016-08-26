/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MPVASTModel.h>

@class NSString;

@interface MPVASTDurationOffset : MPVASTModel {

	unsigned long long _type;
	NSString* _offset;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * offset;               //@synthesize offset=_offset - In the implementation block
-(double)timeIntervalForVideoWithDuration:(double)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)type;
-(NSString *)offset;
@end
