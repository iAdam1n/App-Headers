/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class UITableView, NSArray;

@interface TWTRTableViewProxy : NSProxy {

	BOOL _enabled;
	BOOL _isEnabled;
	UITableView* _tableView;
	NSArray* _selectorsToProxy;

}

@property (nonatomic,readonly) UITableView * tableView;                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectorsToProxy;              //@synthesize selectorsToProxy=_selectorsToProxy - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled;                               //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                  //@synthesize enabled=_enabled - In the implementation block
-(id)initWithTableView:(id)arg1 selectorsToProxy:(id)arg2 ;
-(NSArray *)selectorsToProxy;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isEnabled;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(UITableView *)tableView;
-(void)forwardInvocation:(id)arg1 ;
@end
