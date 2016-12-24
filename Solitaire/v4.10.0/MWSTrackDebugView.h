/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <SolitaireFree/MWSTrackErrorListener.h>

@class UITableView, NSArray, NSString;

@interface MWSTrackDebugView : UIView <UITableViewDataSource, UITableViewDelegate, MWSTrackErrorListener> {

	UITableView* _table;
	NSArray* _errors;

}

@property (nonatomic,retain) UITableView * table;                   //@synthesize table=_table - In the implementation block
@property (nonatomic,retain) NSArray * errors;                      //@synthesize errors=_errors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updatedWithErrors:(id)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(UITableView *)table;
-(void)setTable:(UITableView *)arg1 ;
-(NSArray *)errors;
-(void)setErrors:(NSArray *)arg1 ;
@end
