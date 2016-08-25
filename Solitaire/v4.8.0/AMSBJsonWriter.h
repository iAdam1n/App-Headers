/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/AMSBJsonBase.h>
#import <SolitaireFree/AMSBJsonWriter.h>

@interface AMSBJsonWriter : AMSBJsonBase <AMSBJsonWriter> {

	BOOL sortKeys;
	BOOL humanReadable;

}

@property (assign) BOOL humanReadable; 
@property (assign) BOOL sortKeys; 
+(void)initialize;
-(id)stringWithFragment:(id)arg1 ;
-(BOOL)humanReadable;
-(void)setHumanReadable:(BOOL)arg1 ;
-(BOOL)sortKeys;
-(void)setSortKeys:(BOOL)arg1 ;
-(BOOL)appendValue:(id)arg1 into:(id)arg2 ;
-(BOOL)appendDictionary:(id)arg1 into:(id)arg2 ;
-(BOOL)appendArray:(id)arg1 into:(id)arg2 ;
-(BOOL)appendString:(id)arg1 into:(id)arg2 ;
-(id)stringWithObject:(id)arg1 ;
-(id)indent;
@end

