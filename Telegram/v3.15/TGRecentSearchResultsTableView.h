/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSArray, NSString;

@interface TGRecentSearchResultsTableView : UITableView <UITableViewDelegate, UITableViewDataSource> {

	/*^block*/id _itemSelected;
	/*^block*/id _clearPressed;
	NSArray* _items;

}

@property (nonatomic,copy) id itemSelected;                         //@synthesize itemSelected=_itemSelected - In the implementation block
@property (nonatomic,copy) id clearPressed;                         //@synthesize clearPressed=_clearPressed - In the implementation block
@property (nonatomic,retain) NSArray * items;                       //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearButtonPressed;
-(void)setClearPressed:(id)arg1 ;
-(id)clearPressed;
-(void)setHidden:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setItemSelected:(id)arg1 ;
-(id)itemSelected;
@end
