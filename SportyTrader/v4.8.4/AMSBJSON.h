/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/AMSBJsonBase.h>
#import <SportyTrader/AMSBJsonParser.h>
#import <SportyTrader/AMSBJsonWriter.h>

@class AMSBJsonParser, AMSBJsonWriter;

@interface AMSBJSON : AMSBJsonBase <AMSBJsonParser, AMSBJsonWriter> {

	AMSBJsonParser* jsonParser;
	AMSBJsonWriter* jsonWriter;

}

@property (assign) BOOL humanReadable; 
@property (assign) BOOL sortKeys; 
-(id)objectWithString:(id)arg1 ;
-(BOOL)sortKeys;
-(void)setSortKeys:(BOOL)arg1 ;
-(BOOL)humanReadable;
-(void)setHumanReadable:(BOOL)arg1 ;
-(id)stringWithObject:(id)arg1 ;
-(id)stringWithObject:(id)arg1 allowScalar:(BOOL)arg2 error:(id*)arg3 ;
-(id)objectWithString:(id)arg1 allowScalar:(BOOL)arg2 error:(id*)arg3 ;
-(id)stringWithFragment:(id)arg1 error:(id*)arg2 ;
-(id)stringWithObject:(id)arg1 error:(id*)arg2 ;
-(id)fragmentWithString:(id)arg1 error:(id*)arg2 ;
-(id)objectWithString:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(unsigned long long)maxDepth;
-(void)setMaxDepth:(unsigned long long)arg1 ;
@end
