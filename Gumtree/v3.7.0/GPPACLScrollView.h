/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Gumtree/GPPACLFilterFieldDelegate.h>

@protocol GPPACLScrollViewDelegate;
@class NSMutableArray, GPPACLFilterField, GPPACLScrollCell, GPPACL, NSString;

@interface GPPACLScrollView : UIScrollView <GPPACLFilterFieldDelegate> {

	BOOL _needsUpdate;
	NSMutableArray* _systemGroupCells;
	NSMutableArray* _circleCells;
	NSMutableArray* _peopleCells;
	GPPACLFilterField* _textFilter;
	BOOL _editable;
	GPPACLScrollCell* _selectedCell;
	BOOL _wrapCells;
	BOOL _searchEnabled;
	GPPACL* _acl;
	id<GPPACLScrollViewDelegate> _aclDelegate;
	long long _numberOfRows;
	double _scrollMargin;
	double _cellSpacing;

}

@property (nonatomic,retain) GPPACL * acl;                                                 //@synthesize acl=_acl - In the implementation block
@property (assign,nonatomic,__weak) id<GPPACLScrollViewDelegate> aclDelegate;              //@synthesize aclDelegate=_aclDelegate - In the implementation block
@property (assign,nonatomic) BOOL wrapCells;                                               //@synthesize wrapCells=_wrapCells - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchQuery; 
@property (assign,nonatomic) BOOL searchEnabled;                                           //@synthesize searchEnabled=_searchEnabled - In the implementation block
@property (nonatomic,readonly) long long numberOfRows;                                     //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (nonatomic,readonly) long long numberOfCells; 
@property (assign,nonatomic) double scrollMargin;                                          //@synthesize scrollMargin=_scrollMargin - In the implementation block
@property (assign,nonatomic) double cellSpacing;                                           //@synthesize cellSpacing=_cellSpacing - In the implementation block
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(void)textFieldDidDeleteWhenEmpty:(id)arg1 ;
-(void)setAcl:(GPPACL *)arg1 ;
-(void)addScrollCellForACLEntry:(id)arg1 ;
-(void)removeScrollCellForACLEntry:(id)arg1 ;
-(void)unregisterObservationForACL:(id)arg1 ;
-(void)registerObservationForACL:(id)arg1 ;
-(void)drawAllCells;
-(void)updateCellFrames;
-(void)drawSystemGroupCells;
-(void)drawCircleCells;
-(void)drawPeopleCells;
-(void)flushCircleCells;
-(GPPACL *)acl;
-(void)flushSystemGroupCells;
-(void)flushPeopleCells;
-(long long)indexOfCellForEntry:(id)arg1 ;
-(id)arrayCellsForEntry:(id)arg1 ;
-(double)scrollMargin;
-(void)scrollToBottomIfNeeded;
-(void)removeLastCell;
-(id)initWithACL:(id)arg1 editable:(BOOL)arg2 ;
-(id<GPPACLScrollViewDelegate>)aclDelegate;
-(void)setAclDelegate:(id<GPPACLScrollViewDelegate>)arg1 ;
-(BOOL)wrapCells;
-(void)setWrapCells:(BOOL)arg1 ;
-(void)setScrollMargin:(double)arg1 ;
-(void)setSearchEnabled:(BOOL)arg1 ;
-(BOOL)searchEnabled;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityIdentifier;
-(long long)numberOfRows;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)accessibilityValue;
-(void)orientationDidChange:(id)arg1 ;
-(NSString *)searchQuery;
-(long long)numberOfCells;
-(void)resetSearch;
-(double)cellSpacing;
-(void)setCellSpacing:(double)arg1 ;
@end

