/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface BRAsyncQueue : NSObject {

	id delegate;
	NSMutableArray* workers;

}

@property (assign) id delegate; 
@property (retain) NSMutableArray * workers; 
-(void)setWorkers:(NSMutableArray *)arg1 ;
-(void)workerCompleted:(id)arg1 ;
-(void)workerFailed:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)stop;
-(void)start;
-(void)add:(id)arg1 ;
-(NSMutableArray *)workers;
@end
