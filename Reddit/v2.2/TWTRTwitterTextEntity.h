/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Reddit/Reddit-Structs.h>
@interface TWTRTwitterTextEntity : NSObject {

	unsigned long long _type;
	NSRange _range;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) NSRange range;                        //@synthesize range=_range - In the implementation block
+(id)entityWithType:(unsigned long long)arg1 range:(NSRange)arg2 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithType:(unsigned long long)arg1 range:(NSRange)arg2 ;
@end
