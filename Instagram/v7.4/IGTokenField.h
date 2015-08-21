/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGDynamicCollectionViewDatasource.h>
#import <Instagram/IGDynamicCollectionViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGTokenViewDelegate.h>
#import <Instagram/IGUsertagViewDelegate.h>

@protocol IGTokenFieldDelegate;
@class NSMutableOrderedSet, NSMutableArray, UIView, IGDynamicCollectionView, UILabel, UIImageView, IGTextField, IGUsertagView, NSString, NSSet;

@interface IGTokenField : UIView <IGDynamicCollectionViewDatasource, IGDynamicCollectionViewDelegate, UITextFieldDelegate, IGTextFieldDelegate, IGTokenViewDelegate, IGUsertagViewDelegate> {

	BOOL _isEditing;
	BOOL _shadowVisible;
	BOOL _showSearchIcon;
	BOOL _isDisabled;
	double _tokenHeight;
	unsigned long long _tokenType;
	id<IGTokenFieldDelegate> _delegate;
	NSMutableOrderedSet* _tokens;
	NSMutableArray* _tokenViews;
	UIView* _borderedView;
	IGDynamicCollectionView* _collectionView;
	UILabel* _toLabel;
	UIImageView* _searchGlyphView;
	IGTextField* _searchField;
	IGUsertagView* _usertagView;
	CGSize _contentSize;

}

@property (assign,nonatomic) NSString * query; 
@property (assign,nonatomic) double tokenHeight;                                    //@synthesize tokenHeight=_tokenHeight - In the implementation block
@property (nonatomic,readonly) NSSet * tokenObjects; 
@property (nonatomic,readonly) CGSize contentSize;                                  //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                                        //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic) BOOL shadowVisible;                                    //@synthesize shadowVisible=_shadowVisible - In the implementation block
@property (assign,nonatomic) unsigned long long tokenType;                          //@synthesize tokenType=_tokenType - In the implementation block
@property (assign,nonatomic) BOOL showSearchIcon;                                   //@synthesize showSearchIcon=_showSearchIcon - In the implementation block
@property (assign,nonatomic) BOOL isDisabled;                                       //@synthesize isDisabled=_isDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<IGTokenFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * tokens;                          //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,retain) NSMutableArray * tokenViews;                           //@synthesize tokenViews=_tokenViews - In the implementation block
@property (nonatomic,retain) UIView * borderedView;                                 //@synthesize borderedView=_borderedView - In the implementation block
@property (nonatomic,retain) IGDynamicCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UILabel * toLabel;                                     //@synthesize toLabel=_toLabel - In the implementation block
@property (nonatomic,retain) UIImageView * searchGlyphView;                         //@synthesize searchGlyphView=_searchGlyphView - In the implementation block
@property (nonatomic,retain) IGTextField * searchField;                             //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,retain) IGUsertagView * usertagView;                           //@synthesize usertagView=_usertagView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTokenHeight:(double)arg1 ;
-(void)setShowSearchIcon:(BOOL)arg1 ;
-(NSSet *)tokenObjects;
-(void)removeToken:(id)arg1 animated:(BOOL)arg2 ;
-(void)addToken:(id)arg1 animated:(BOOL)arg2 ;
-(void)textFieldDidTapBackspaceKey:(id)arg1 previousText:(id)arg2 ;
-(UIView *)borderedView;
-(UILabel *)toLabel;
-(void)updateSearchFieldPlaceholder;
-(void)updateSearchFieldIconAndWidth;
-(void)addTokens:(id)arg1 animated:(BOOL)arg2 ;
-(NSMutableArray *)tokenViews;
-(void)removeTokens:(id)arg1 animated:(BOOL)arg2 ;
-(id)currentResponder;
-(void)hideUsertagViewAnimated:(BOOL)arg1 ;
-(void)checkEditingStatus;
-(BOOL)showSearchIcon;
-(UIImageView *)searchGlyphView;
-(void)setIsEditing:(BOOL)arg1 ;
-(IGUsertagView *)usertagView;
-(void)showUsertagViewForTokenView:(id)arg1 ;
-(void)setUsertagView:(IGUsertagView *)arg1 ;
-(long long)numberOfViewsForCollectionView:(id)arg1 ;
-(id)viewForCollectionView:(id)arg1 atIndex:(long long)arg2 ;
-(void)collectionView:(id)arg1 didTapItemAtIndex:(long long)arg2 ;
-(void)collectionView:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)tokenViewDidBecomeFirstResponder:(id)arg1 ;
-(void)tokenViewDidResignFirstResponder:(id)arg1 ;
-(void)tokenViewWantsDelete:(id)arg1 replacementString:(id)arg2 ;
-(BOOL)tagViewCanBeSelected:(id)arg1 ;
-(void)tagViewWasRemoved:(id)arg1 ;
-(void)setShadowVisible:(BOOL)arg1 ;
-(double)tokenHeight;
-(BOOL)shadowVisible;
-(void)setTokenViews:(NSMutableArray *)arg1 ;
-(void)setBorderedView:(UIView *)arg1 ;
-(void)setToLabel:(UILabel *)arg1 ;
-(void)setSearchGlyphView:(UIImageView *)arg1 ;
-(void)setSearchField:(IGTextField *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setIsDisabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGTokenFieldDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<IGTokenFieldDelegate>)delegate;
-(CGSize)contentSize;
-(NSString *)query;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isEditing;
-(IGDynamicCollectionView *)collectionView;
-(void)setQuery:(NSString *)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(IGTextField *)searchField;
-(NSMutableOrderedSet *)tokens;
-(void)setCollectionView:(IGDynamicCollectionView *)arg1 ;
-(void)setTokens:(NSMutableOrderedSet *)arg1 ;
-(void)setTokenType:(unsigned long long)arg1 ;
-(unsigned long long)tokenType;
-(BOOL)isDisabled;
@end

