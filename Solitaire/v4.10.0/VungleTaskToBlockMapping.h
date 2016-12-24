/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VungleTaskToBlockMapping : NSObject {

	BOOL _isTerminating;
	NSMutableDictionary* _taskToOperation;
	NSMutableDictionary* _operationToBlock;

}

@property (nonatomic,retain) NSMutableDictionary * taskToOperation;               //@synthesize taskToOperation=_taskToOperation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * operationToBlock;              //@synthesize operationToBlock=_operationToBlock - In the implementation block
@property (assign,nonatomic) BOOL isTerminating;                                  //@synthesize isTerminating=_isTerminating - In the implementation block
-(id)keyForTask:(id)arg1 ;
-(id)keyForOperation:(id)arg1 ;
-(/*^block*/id)blockForOperation:(id)arg1 ;
-(void)removeOperationWhileTerminating:(id)arg1 withTaskKey:(id)arg2 ;
-(void)removeTaskWhileTerminating:(id)arg1 forOperation:(id)arg2 ;
-(unsigned long long)stateForTask:(id)arg1 ;
-(/*^block*/id)blockForTask:(id)arg1 ;
-(id)operationForTask:(id)arg1 ;
-(void)addTask:(id)arg1 withOperation:(id)arg2 ;
-(void)addOperation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)replaceTask:(id)arg1 withNewTask:(id)arg2 ;
-(void)removeMappingsForOperation:(id)arg1 ;
-(void)cleanupMapping;
-(id)taskIdentifierForOperation:(id)arg1 ;
-(void)setIsTerminating:(BOOL)arg1 ;
-(NSMutableDictionary *)taskToOperation;
-(void)setTaskToOperation:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)operationToBlock;
-(void)setOperationToBlock:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)description;
-(BOOL)isTerminating;
-(void)removeTask:(id)arg1 ;
-(unsigned long long)objectsCount;
@end
