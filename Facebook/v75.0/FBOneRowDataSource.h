/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBTableViewSectionDataSource.h>
#import <Facebook/FBCollectionViewSectionDataSource.h>

@protocol FBTableViewMutating, FBCollectionViewMutating, FBOneRowDataSourceListener;
@class NSString, UIView;

@interface FBOneRowDataSource : NSObject <FBTableViewSectionDataSource, FBCollectionViewSectionDataSource> {

	NSString* _reuseIdentifier;
	unsigned long long _sizingPolicy;
	BOOL _didCallSizeThatFits;
	BOOL _visible;
	id<FBTableViewMutating> _tableViewMutator;
	id<FBCollectionViewMutating> _collectionViewMutator;
	UIView* _rowView;
	id<FBOneRowDataSourceListener> _listener;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic,__weak) id<FBTableViewMutating> tableViewMutator;                        //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,nonatomic,__weak) id<FBCollectionViewMutating> collectionViewMutator;              //@synthesize collectionViewMutator=_collectionViewMutator - In the implementation block
@property (nonatomic,retain) UIView * rowView;                                                       //@synthesize rowView=_rowView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                                                    //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic,__weak) id<FBOneRowDataSourceListener> listener;                         //@synthesize listener=_listener - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                          //@synthesize visible=_visible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
+(id)_oneRowIndexPath;
-(void)registerClassWithReuseIdentifier;
-(id<FBCollectionViewMutating>)collectionViewMutator;
-(void)setCollectionViewMutator:(id<FBCollectionViewMutating>)arg1 ;
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(id<FBTableViewMutating>)tableViewMutator;
-(void)setRowView:(UIView *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 sizingPolicy:(unsigned long long)arg2 ;
-(void)_setupCell:(id)arg1 withParent:(id)arg2 ;
-(double)_heightForRowWithWidth:(double)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)reload;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id<FBOneRowDataSourceListener>)listener;
-(void)setListener:(id<FBOneRowDataSourceListener>)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(UIView *)rowView;
@end
