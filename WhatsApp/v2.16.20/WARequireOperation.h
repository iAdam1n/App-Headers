/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WASynchronousBackupOperation.h>

@class WAActionManager, NSMutableArray;

@interface WARequireOperation : WASynchronousBackupOperation {

	WAActionManager* _manager;
	unsigned long long _code;
	NSMutableArray* _requirements;
	NSMutableArray* _actions;

}

@property (retain) NSMutableArray * requirements;              //@synthesize requirements=_requirements - In the implementation block
@property (retain) NSMutableArray * actions;                   //@synthesize actions=_actions - In the implementation block
-(id)initWithDependenciesRequired:(BOOL)arg1 ;
-(NSMutableArray *)requirements;
-(id)initWithActionManager:(id)arg1 andCode:(unsigned long long)arg2 ;
-(void)addRequirement:(id)arg1 ;
-(void)setRequirements:(NSMutableArray *)arg1 ;
-(id)init;
-(void)cancel;
-(void)setActions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)actions;
-(void)run;
-(void)addAction:(/*^block*/id)arg1 ;
@end
