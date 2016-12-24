/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/TWTRImageLoaderTaskManager.h>

@protocol TWTRImageLoaderTaskManager <NSObject>
@required
-(void)addTask:(id)arg1 withRequestID:(id)arg2;
-(id)removeTaskWithRequestID:(id)arg1;

@end


@class NSMutableDictionary, NSString;

@interface TWTRImageLoaderTaskManager : NSObject <TWTRImageLoaderTaskManager> {

	NSMutableDictionary* _currentTasks;

}

@property (nonatomic,retain) NSMutableDictionary * currentTasks;              //@synthesize currentTasks=_currentTasks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addTask:(id)arg1 withRequestID:(id)arg2 ;
-(id)removeTaskWithRequestID:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)currentTasks;
-(void)setCurrentTasks:(NSMutableDictionary *)arg1 ;
@end
