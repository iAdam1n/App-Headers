/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@class SKPLazyPropertyContainer;

@interface SKPFetchOperation : NSBlockOperation {

	SKPLazyPropertyContainer* _object;
	/*^block*/id _operationBlock;
	/*^block*/id _assignBlock;
	id _result;

}

@property (nonatomic,retain) id result;                                             //@synthesize result=_result - In the implementation block
@property (assign,nonatomic,__weak) SKPLazyPropertyContainer * object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) id operationBlock;                                       //@synthesize operationBlock=_operationBlock - In the implementation block
@property (nonatomic,copy) id assignBlock;                                          //@synthesize assignBlock=_assignBlock - In the implementation block
-(id)initWithObject:(id)arg1 operationBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setAssignBlock:(id)arg1 ;
-(id)assignBlock;
-(SKPLazyPropertyContainer *)object;
-(void)setObject:(SKPLazyPropertyContainer *)arg1 ;
-(void)main;
-(id)result;
-(void)setResult:(id)arg1 ;
-(id)operationBlock;
-(void)setOperationBlock:(id)arg1 ;
@end

