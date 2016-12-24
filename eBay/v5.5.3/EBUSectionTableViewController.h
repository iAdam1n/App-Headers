/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol EBUSectionSelectorProtocol;
@class NSArray;

@interface EBUSectionTableViewController : UITableViewController {

	long long _checkedItem;
	NSArray* _content;
	id<EBUSectionSelectorProtocol> _delegate;

}

@property (assign,nonatomic) long long checkedItem;                                       //@synthesize checkedItem=_checkedItem - In the implementation block
@property (nonatomic,retain) NSArray * content;                                           //@synthesize content=_content - In the implementation block
@property (assign,nonatomic,__weak) id<EBUSectionSelectorProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setCheckedItem:(long long)arg1 ;
-(long long)checkedItem;
-(void)setDelegate:(id<EBUSectionSelectorProtocol>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<EBUSectionSelectorProtocol>)delegate;
-(NSArray *)content;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(void)setContent:(NSArray *)arg1 ;
@end
