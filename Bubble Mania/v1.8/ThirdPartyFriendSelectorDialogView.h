/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/XibDialogView.h>
#import <BubbleMania/ThirdPartyFriendSelectionDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIView, S8Button, S8Label, NSMutableArray, UITableView, NSMutableDictionary, UITextField, UIButton, NSTimer, NSString;

@interface ThirdPartyFriendSelectorDialogView : XibDialogView <ThirdPartyFriendSelectionDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

	BOOL _fetchedNonGameFriends;
	BOOL _isSearchSliderDown;
	BOOL _searchBarEnabled;
	int _currentFriendSelectorState;
	UIView* _allTabView;
	UIView* _checkmarkView;
	UIView* _emptyAreaView;
	UIView* _emptyAreaAllView;
	UIView* _emptyAreaGameView;
	UIView* _gameTabView;
	S8Button* _sendButton;
	S8Button* _selectAllButton;
	S8Label* _timerLabel;
	NSMutableArray* _friends;
	UIView* _friendsView;
	UIView* _searchSlider;
	UIView* _selectAllView;
	UITableView* _friendsTableView;
	NSMutableDictionary* _selectedFriends;
	S8Button* _gameFriendsButton;
	S8Button* _nonGameFriendsButton;
	UITextField* _searchField;
	UIButton* _dismissKeyboardButton;
	long long _itemsPerRow;
	UIView* _searchBarView;
	double _threshold;
	NSTimer* _refreshTimerLabelTimer;
	NSString* _sourceFlowDescription;
	CGPoint _lastOffset;
	CGPoint _lastSearchBarEnabledOffset;
	CGRect _cachedFriendsTableFrame;

}

@property (nonatomic,retain) UIView * allTabView;                                //@synthesize allTabView=_allTabView - In the implementation block
@property (nonatomic,retain) UIView * checkmarkView;                             //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,retain) UIView * emptyAreaView;                             //@synthesize emptyAreaView=_emptyAreaView - In the implementation block
@property (nonatomic,retain) UIView * emptyAreaAllView;                          //@synthesize emptyAreaAllView=_emptyAreaAllView - In the implementation block
@property (nonatomic,retain) UIView * emptyAreaGameView;                         //@synthesize emptyAreaGameView=_emptyAreaGameView - In the implementation block
@property (nonatomic,retain) UIView * gameTabView;                               //@synthesize gameTabView=_gameTabView - In the implementation block
@property (nonatomic,retain) S8Button * sendButton;                              //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) S8Button * selectAllButton;                         //@synthesize selectAllButton=_selectAllButton - In the implementation block
@property (nonatomic,retain) S8Label * timerLabel;                               //@synthesize timerLabel=_timerLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * friends;                           //@synthesize friends=_friends - In the implementation block
@property (nonatomic,retain) UIView * friendsView;                               //@synthesize friendsView=_friendsView - In the implementation block
@property (nonatomic,retain) UIView * searchSlider;                              //@synthesize searchSlider=_searchSlider - In the implementation block
@property (nonatomic,retain) UIView * selectAllView;                             //@synthesize selectAllView=_selectAllView - In the implementation block
@property (nonatomic,retain) UITableView * friendsTableView;                     //@synthesize friendsTableView=_friendsTableView - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * selectedFriends;              //@synthesize selectedFriends=_selectedFriends - In the implementation block
@property (nonatomic,retain) S8Button * gameFriendsButton;                       //@synthesize gameFriendsButton=_gameFriendsButton - In the implementation block
@property (nonatomic,retain) S8Button * nonGameFriendsButton;                    //@synthesize nonGameFriendsButton=_nonGameFriendsButton - In the implementation block
@property (nonatomic,retain) UITextField * searchField;                          //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,retain) UIButton * dismissKeyboardButton;                   //@synthesize dismissKeyboardButton=_dismissKeyboardButton - In the implementation block
@property (assign,nonatomic) long long itemsPerRow;                              //@synthesize itemsPerRow=_itemsPerRow - In the implementation block
@property (assign,nonatomic) BOOL fetchedNonGameFriends;                         //@synthesize fetchedNonGameFriends=_fetchedNonGameFriends - In the implementation block
@property (assign,nonatomic) BOOL isSearchSliderDown;                            //@synthesize isSearchSliderDown=_isSearchSliderDown - In the implementation block
@property (assign,nonatomic) int currentFriendSelectorState;                     //@synthesize currentFriendSelectorState=_currentFriendSelectorState - In the implementation block
@property (nonatomic,retain) UIView * searchBarView;                             //@synthesize searchBarView=_searchBarView - In the implementation block
@property (assign,nonatomic) double threshold;                                   //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) CGPoint lastOffset;                                 //@synthesize lastOffset=_lastOffset - In the implementation block
@property (assign,nonatomic) CGPoint lastSearchBarEnabledOffset;                 //@synthesize lastSearchBarEnabledOffset=_lastSearchBarEnabledOffset - In the implementation block
@property (assign,nonatomic) BOOL searchBarEnabled;                              //@synthesize searchBarEnabled=_searchBarEnabled - In the implementation block
@property (assign,nonatomic) CGRect cachedFriendsTableFrame;                     //@synthesize cachedFriendsTableFrame=_cachedFriendsTableFrame - In the implementation block
@property (nonatomic,retain) NSTimer * refreshTimerLabelTimer;                   //@synthesize refreshTimerLabelTimer=_refreshTimerLabelTimer - In the implementation block
@property (nonatomic,retain) NSString * sourceFlowDescription;                   //@synthesize sourceFlowDescription=_sourceFlowDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissed:(id)arg1 ;
-(void)preauthDialogShown;
-(id)initWithString:(id)arg1 startingState:(int)arg2 gameFriendsHidden:(BOOL)arg3 sourceDescription:(id)arg4 ;
-(S8Label *)timerLabel;
-(void)setTimerLabel:(S8Label *)arg1 ;
-(BOOL)fetchedNonGameFriends;
-(S8Button *)selectAllButton;
-(BOOL)itemIdIsSelected:(id)arg1 ;
-(void)itemDeselected;
-(void)onGetFriendsWithSuccess:(long long)arg1 result:(id)arg2 ;
-(void)setSelectedFriends:(NSMutableDictionary *)arg1 ;
-(UIView *)gameTabView;
-(void)setCurrentFriendSelectorState:(int)arg1 ;
-(UIView *)emptyAreaAllView;
-(int)currentFriendSelectorState;
-(UIView *)emptyAreaGameView;
-(void)stopRefreshTimerLabelTimer;
-(void)startRefreshTimerLabelTimerIfNecessary;
-(UIButton *)dismissKeyboardButton;
-(void)setSourceFlowDescription:(NSString *)arg1 ;
-(void)setItemsPerRow:(long long)arg1 ;
-(UIView *)searchBarView;
-(UITableView *)friendsTableView;
-(void)setCachedFriendsTableFrame:(CGRect)arg1 ;
-(void)shiftSearchBarView:(double)arg1 ;
-(BOOL)isSearchSliderDown;
-(void)setIsSearchSliderDown:(BOOL)arg1 ;
-(UIView *)searchSlider;
-(void)setUpButtonSelection;
-(void)refreshFriends;
-(void)selectAllFriendsWith:(BOOL)arg1 ;
-(void)thirdPartyFriendsNotifiedWithDismiss:(id)arg1 ;
-(void)thirdPartyFriendsNotified:(id)arg1 ;
-(void)toggleFriend:(id)arg1 ;
-(void)nonGameFriendsButtonSelected;
-(void)gameFriendsButtonSelected;
-(NSMutableDictionary *)selectedFriends;
-(void)populateFriendsList;
-(void)sortAndTrimFriends;
-(UIView *)emptyAreaView;
-(UIView *)friendsView;
-(UIView *)selectAllView;
-(S8Button *)nonGameFriendsButton;
-(S8Button *)gameFriendsButton;
-(void)refreshGameFriendsView;
-(void)refreshNonGameFriendsView;
-(BOOL)searchBarEnabled;
-(void)setSearchBarEnabled:(BOOL)arg1 ;
-(CGPoint)lastSearchBarEnabledOffset;
-(void)setLastSearchBarEnabledOffset:(CGPoint)arg1 ;
-(CGRect)cachedFriendsTableFrame;
-(void)filterFriends;
-(void)refreshTimerLabel;
-(void)setRefreshTimerLabelTimer:(NSTimer *)arg1 ;
-(NSTimer *)refreshTimerLabelTimer;
-(id)initWithSourceDescription:(id)arg1 ;
-(id)initWithNotice:(id)arg1 ;
-(void)animateSlider:(long long)arg1 ;
-(void)allButtonSelected;
-(void)dismissKeyboardButtonPressed;
-(void)gameFriendsButtonPressed;
-(void)nonGameFriendsButtonPressed;
-(UIView *)allTabView;
-(void)setAllTabView:(UIView *)arg1 ;
-(void)setEmptyAreaView:(UIView *)arg1 ;
-(void)setEmptyAreaAllView:(UIView *)arg1 ;
-(void)setEmptyAreaGameView:(UIView *)arg1 ;
-(void)setGameTabView:(UIView *)arg1 ;
-(void)setSelectAllButton:(S8Button *)arg1 ;
-(void)setFriendsView:(UIView *)arg1 ;
-(void)setSearchSlider:(UIView *)arg1 ;
-(void)setSelectAllView:(UIView *)arg1 ;
-(void)setFriendsTableView:(UITableView *)arg1 ;
-(void)setGameFriendsButton:(S8Button *)arg1 ;
-(void)setNonGameFriendsButton:(S8Button *)arg1 ;
-(void)setSearchField:(UITextField *)arg1 ;
-(void)setDismissKeyboardButton:(UIButton *)arg1 ;
-(void)setFetchedNonGameFriends:(BOOL)arg1 ;
-(void)setSearchBarView:(UIView *)arg1 ;
-(NSString *)sourceFlowDescription;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)searchField;
-(void)setLastOffset:(CGPoint)arg1 ;
-(CGPoint)lastOffset;
-(UIView *)checkmarkView;
-(void)setFriends:(NSMutableArray *)arg1 ;
-(NSMutableArray *)friends;
-(BOOL)textFieldDidChange:(id)arg1 ;
-(void)refresh;
-(id)initWithOptions:(id)arg1 ;
-(long long)itemsPerRow;
-(S8Button *)sendButton;
-(void)setSendButton:(S8Button *)arg1 ;
-(void)setCheckmarkView:(UIView *)arg1 ;
-(void)setUp;
-(void)setThreshold:(double)arg1 ;
-(double)threshold;
-(void)sendButtonPressed;
@end

