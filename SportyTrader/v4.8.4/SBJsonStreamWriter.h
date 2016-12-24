/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBJsonStreamWriterDelegate;
@class NSMutableDictionary, NSString, SBJsonStreamWriterState, NSMutableArray;

@interface SBJsonStreamWriter : NSObject {

	NSMutableDictionary* cache;
	BOOL humanReadable;
	BOOL sortKeys;
	NSString* error;
	unsigned long long maxDepth;
	SBJsonStreamWriterState* state;
	NSMutableArray* stateStack;
	/*^block*/id sortKeysComparator;
	id<SBJsonStreamWriterDelegate> delegate;

}

@property (assign,nonatomic) SBJsonStreamWriterState * state; 
@property (nonatomic,readonly) NSMutableArray * stateStack; 
@property (assign) id<SBJsonStreamWriterDelegate> delegate; 
@property (assign) unsigned long long maxDepth; 
@property (assign) BOOL humanReadable; 
@property (assign) BOOL sortKeys; 
@property (copy) id sortKeysComparator; 
@property (copy) NSString * error; 
+(void)initialize;
-(NSMutableArray *)stateStack;
-(BOOL)sortKeys;
-(void)setSortKeys:(BOOL)arg1 ;
-(id)sortKeysComparator;
-(void)setSortKeysComparator:(id)arg1 ;
-(BOOL)humanReadable;
-(void)setHumanReadable:(BOOL)arg1 ;
-(BOOL)writeObject:(id)arg1 ;
-(BOOL)writeArray:(id)arg1 ;
-(BOOL)writeObjectOpen;
-(BOOL)writeObjectClose;
-(BOOL)writeArrayOpen;
-(BOOL)writeArrayClose;
-(BOOL)writeNumber:(id)arg1 ;
-(BOOL)writeNull;
-(BOOL)writeBool:(BOOL)arg1 ;
-(id)init;
-(void)setDelegate:(id<SBJsonStreamWriterDelegate>)arg1 ;
-(id<SBJsonStreamWriterDelegate>)delegate;
-(SBJsonStreamWriterState *)state;
-(void)setState:(SBJsonStreamWriterState *)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)maxDepth;
-(NSString *)error;
-(void)setError:(NSString *)arg1 ;
-(BOOL)writeString:(id)arg1 ;
-(BOOL)writeValue:(id)arg1 ;
-(void)setMaxDepth:(unsigned long long)arg1 ;
@end
