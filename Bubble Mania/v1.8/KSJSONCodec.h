/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@class NSMutableArray, NSMutableData, NSError;

@interface KSJSONCodec : NSObject {

	BOOL _prettyPrint;
	BOOL _sorted;
	BOOL _ignoreNullsInArrays;
	BOOL _ignoreNullsInObjects;
	id _topLevelContainer;
	id _currentContainer;
	NSMutableArray* _containerStack;
	KSJSONDecodeCallbacks* _callbacks;
	NSMutableData* _serializedData;
	NSError* _error;

}

@property (assign,nonatomic) KSJSONDecodeCallbacks* callbacks;              //@synthesize callbacks=_callbacks - In the implementation block
@property (nonatomic,retain) NSMutableArray * containerStack;               //@synthesize containerStack=_containerStack - In the implementation block
@property (assign,nonatomic) id currentContainer;                           //@synthesize currentContainer=_currentContainer - In the implementation block
@property (nonatomic,retain) id topLevelContainer;                          //@synthesize topLevelContainer=_topLevelContainer - In the implementation block
@property (nonatomic,retain) NSMutableData * serializedData;                //@synthesize serializedData=_serializedData - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL prettyPrint;                              //@synthesize prettyPrint=_prettyPrint - In the implementation block
@property (assign,nonatomic) BOOL sorted;                                   //@synthesize sorted=_sorted - In the implementation block
@property (assign,nonatomic) BOOL ignoreNullsInArrays;                      //@synthesize ignoreNullsInArrays=_ignoreNullsInArrays - In the implementation block
@property (assign,nonatomic) BOOL ignoreNullsInObjects;                     //@synthesize ignoreNullsInObjects=_ignoreNullsInObjects - In the implementation block
+(id)codecWithEncodeOptions:(int)arg1 decodeOptions:(int)arg2 ;
+(id)decode:(id)arg1 options:(int)arg2 error:(id*)arg3 ;
+(id)encode:(id)arg1 options:(int)arg2 error:(id*)arg3 ;
-(id)initWithEncodeOptions:(int)arg1 decodeOptions:(int)arg2 ;
-(void)setPrettyPrint:(BOOL)arg1 ;
-(void)setIgnoreNullsInArrays:(BOOL)arg1 ;
-(void)setIgnoreNullsInObjects:(BOOL)arg1 ;
-(id)topLevelContainer;
-(void)setTopLevelContainer:(id)arg1 ;
-(id)currentContainer;
-(void)setCurrentContainer:(id)arg1 ;
-(BOOL)prettyPrint;
-(BOOL)ignoreNullsInArrays;
-(BOOL)ignoreNullsInObjects;
-(void)dealloc;
-(NSMutableArray *)containerStack;
-(void)setContainerStack:(NSMutableArray *)arg1 ;
-(NSMutableData *)serializedData;
-(KSJSONDecodeCallbacks*)callbacks;
-(BOOL)sorted;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setSorted:(BOOL)arg1 ;
-(void)setCallbacks:(KSJSONDecodeCallbacks*)arg1 ;
-(void)setSerializedData:(NSMutableData *)arg1 ;
@end
