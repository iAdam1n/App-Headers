/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Gumtree/ECSimpleCompletionProtocol.h>

@class NSArray, NSMutableArray, UITableView, NSString;

@interface ECEnumListViewController : ECBaseViewController <UITableViewDataSource, UITableViewDelegate, ECSimpleCompletionProtocol> {

	BOOL _required;
	/*^block*/id _completionHandler;
	NSArray* _items;
	unsigned long long _supportedSelectionCount;
	NSMutableArray* _selectedItems;
	UITableView* _tableView;

}

@property (assign,getter=isRequired,nonatomic) BOOL required;                         //@synthesize required=_required - In the implementation block
@property (nonatomic,copy) NSArray * items;                                           //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableArray * selectedItems;                          //@synthesize selectedItems=_selectedItems - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) unsigned long long supportedSelectionCount;              //@synthesize supportedSelectionCount=_supportedSelectionCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)initWithItems:(id)arg1 selectedItems:(id)arg2 supportedSelectionCount:(unsigned long long)arg3 required:(BOOL)arg4 ;
-(void)setSupportedSelectionCount:(unsigned long long)arg1 ;
-(unsigned long long)supportedSelectionCount;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)loadView;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(NSMutableArray *)selectedItems;
-(void)setSelectedItems:(NSMutableArray *)arg1 ;
-(BOOL)isRequired;
-(void)setRequired:(BOOL)arg1 ;
@end

