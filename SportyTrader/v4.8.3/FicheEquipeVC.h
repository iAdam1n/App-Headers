/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/BaseContentViewController.h>

@class UIActivityIndicatorView, DetailedTeam_Football, NSArray, RequestAndTimerHolder, FicheEquipeContentVC, FicheEquipeEffectifVC, FicheEquipeMatchsVC, FicheEquipeSaisonVC, UIScrollView, UIView, UIImageView, UIButton, UILabel, UISegmentedControl, NSLayoutConstraint;

@interface FicheEquipeVC : BaseContentViewController {

	unsigned short _selectedTabIdentifier;
	UIActivityIndicatorView* _activityIndicator;
	long long _defaultTournamentID;
	long long _currentTournamentID;
	DetailedTeam_Football* _team;
	NSArray* _tabArray;
	RequestAndTimerHolder* _requestHolder;
	FicheEquipeContentVC* _selectedSubviewController;
	FicheEquipeEffectifVC* _squadViewController;
	FicheEquipeMatchsVC* _matchesViewController;
	FicheEquipeSaisonVC* _seasonViewController;
	UIScrollView* _mainScrollView;
	UIView* _teamHeaderView;
	UIView* _colorFilterView;
	UIImageView* _logoImageView;
	UIButton* _favoriteButton;
	UILabel* _teamNameLabel;
	UIView* _stadiumView;
	UILabel* _stadiumInfoLabel;
	UIView* _tabContainerView;
	UIScrollView* _tabScrollView;
	UISegmentedControl* _tabSegmentedControl;
	UIImageView* _leftArrowImageView;
	UIImageView* _rightArrowImageView;
	NSLayoutConstraint* _tabSegmentedControlWidthConstraint;
	UIView* _contentContainerView;
	NSLayoutConstraint* _contentContainerViewHeightConstraint;

}

@property (nonatomic,retain) RequestAndTimerHolder * requestHolder;                                  //@synthesize requestHolder=_requestHolder - In the implementation block
@property (assign,nonatomic) unsigned short selectedTabIdentifier;                                   //@synthesize selectedTabIdentifier=_selectedTabIdentifier - In the implementation block
@property (nonatomic,retain) FicheEquipeContentVC * selectedSubviewController;                       //@synthesize selectedSubviewController=_selectedSubviewController - In the implementation block
@property (nonatomic,retain) FicheEquipeEffectifVC * squadViewController;                            //@synthesize squadViewController=_squadViewController - In the implementation block
@property (nonatomic,retain) FicheEquipeMatchsVC * matchesViewController;                            //@synthesize matchesViewController=_matchesViewController - In the implementation block
@property (nonatomic,retain) FicheEquipeSaisonVC * seasonViewController;                             //@synthesize seasonViewController=_seasonViewController - In the implementation block
@property (nonatomic,retain) UIScrollView * mainScrollView;                                          //@synthesize mainScrollView=_mainScrollView - In the implementation block
@property (nonatomic,retain) UIView * teamHeaderView;                                                //@synthesize teamHeaderView=_teamHeaderView - In the implementation block
@property (nonatomic,retain) UIView * colorFilterView;                                               //@synthesize colorFilterView=_colorFilterView - In the implementation block
@property (nonatomic,retain) UIImageView * logoImageView;                                            //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) UIButton * favoriteButton;                                              //@synthesize favoriteButton=_favoriteButton - In the implementation block
@property (nonatomic,retain) UILabel * teamNameLabel;                                                //@synthesize teamNameLabel=_teamNameLabel - In the implementation block
@property (nonatomic,retain) UIView * stadiumView;                                                   //@synthesize stadiumView=_stadiumView - In the implementation block
@property (nonatomic,retain) UILabel * stadiumInfoLabel;                                             //@synthesize stadiumInfoLabel=_stadiumInfoLabel - In the implementation block
@property (nonatomic,retain) UIView * tabContainerView;                                              //@synthesize tabContainerView=_tabContainerView - In the implementation block
@property (nonatomic,retain) UIScrollView * tabScrollView;                                           //@synthesize tabScrollView=_tabScrollView - In the implementation block
@property (nonatomic,retain) UISegmentedControl * tabSegmentedControl;                               //@synthesize tabSegmentedControl=_tabSegmentedControl - In the implementation block
@property (nonatomic,retain) UIImageView * leftArrowImageView;                                       //@synthesize leftArrowImageView=_leftArrowImageView - In the implementation block
@property (nonatomic,retain) UIImageView * rightArrowImageView;                                      //@synthesize rightArrowImageView=_rightArrowImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tabSegmentedControlWidthConstraint;                //@synthesize tabSegmentedControlWidthConstraint=_tabSegmentedControlWidthConstraint - In the implementation block
@property (nonatomic,retain) UIView * contentContainerView;                                          //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentContainerViewHeightConstraint;              //@synthesize contentContainerViewHeightConstraint=_contentContainerViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                            //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) long long defaultTournamentID;                                          //@synthesize defaultTournamentID=_defaultTournamentID - In the implementation block
@property (assign,nonatomic) long long currentTournamentID;                                          //@synthesize currentTournamentID=_currentTournamentID - In the implementation block
@property (nonatomic,retain) DetailedTeam_Football * team;                                           //@synthesize team=_team - In the implementation block
@property (nonatomic,retain) NSArray * tabArray;                                                     //@synthesize tabArray=_tabArray - In the implementation block
-(void)setRequestHolder:(RequestAndTimerHolder *)arg1 ;
-(void)setSelectedTabIdentifier:(unsigned short)arg1 ;
-(void)setupSegmentedControl;
-(void)swipeGestureToLeft;
-(void)swipeGestureToRight;
-(void)getData;
-(void)setTeamLogo;
-(void)viewWillAppearRoutine;
-(NSArray *)tabArray;
-(void)reloadTabAndSubview;
-(RequestAndTimerHolder *)requestHolder;
-(id)getDateLastRequest;
-(void)dataUpdateRequest;
-(UISegmentedControl *)tabSegmentedControl;
-(UIScrollView *)tabScrollView;
-(UIView *)colorFilterView;
-(UILabel *)teamNameLabel;
-(void)setupTimer;
-(unsigned short)selectedTabIdentifier;
-(FicheEquipeContentVC *)selectedSubviewController;
-(long long)currentTournamentID;
-(long long)defaultTournamentID;
-(id)getURLForRequest;
-(void)requestSucceededWithData:(id)arg1 ;
-(void)requestFailedWithError:(id)arg1 ;
-(void)setTabArray:(NSArray *)arg1 ;
-(void)updateLastRequestDate;
-(void)saveData;
-(id)keywordForTabWithIndex:(int)arg1 ;
-(NSLayoutConstraint *)tabSegmentedControlWidthConstraint;
-(UIImageView *)leftArrowImageView;
-(UIImageView *)rightArrowImageView;
-(void)updateSegmentedControl;
-(void)selectNewTab:(int)arg1 ;
-(id)subviewControllerOfType:(int)arg1 ;
-(void)setSelectedSubviewController:(FicheEquipeContentVC *)arg1 ;
-(UIView *)tabContainerView;
-(NSLayoutConstraint *)contentContainerViewHeightConstraint;
-(id)flurryTag;
-(void)switchTab:(id)arg1 ;
-(void)adjustContentHeight:(double)arg1 ;
-(void)setDefaultTournamentID:(long long)arg1 ;
-(void)setCurrentTournamentID:(long long)arg1 ;
-(void)setMainScrollView:(UIScrollView *)arg1 ;
-(void)setColorFilterView:(UIView *)arg1 ;
-(void)setTeamNameLabel:(UILabel *)arg1 ;
-(void)setTabContainerView:(UIView *)arg1 ;
-(void)setTabScrollView:(UIScrollView *)arg1 ;
-(void)setTabSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)setLeftArrowImageView:(UIImageView *)arg1 ;
-(void)setRightArrowImageView:(UIImageView *)arg1 ;
-(void)setTabSegmentedControlWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIButton *)favoriteButton;
-(void)setFavoriteButton:(UIButton *)arg1 ;
-(void)favoriteChange:(id)arg1 ;
-(void)setTeam:(DetailedTeam_Football *)arg1 ;
-(UIImageView *)logoImageView;
-(void)setLogoImageView:(UIImageView *)arg1 ;
-(UIView *)teamHeaderView;
-(void)updateTeamInfoView;
-(void)updateFavoriteButton;
-(UILabel *)stadiumInfoLabel;
-(UIView *)stadiumView;
-(FicheEquipeEffectifVC *)squadViewController;
-(void)setSquadViewController:(FicheEquipeEffectifVC *)arg1 ;
-(FicheEquipeMatchsVC *)matchesViewController;
-(void)setMatchesViewController:(FicheEquipeMatchsVC *)arg1 ;
-(FicheEquipeSaisonVC *)seasonViewController;
-(void)setSeasonViewController:(FicheEquipeSaisonVC *)arg1 ;
-(void)pushFicheJoueurVC:(id)arg1 ;
-(void)setTeamHeaderView:(UIView *)arg1 ;
-(void)setStadiumView:(UIView *)arg1 ;
-(void)setStadiumInfoLabel:(UILabel *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(DetailedTeam_Football *)team;
-(UIScrollView *)mainScrollView;
-(UIView *)contentContainerView;
-(void)refreshView;
-(void)setContentContainerView:(UIView *)arg1 ;
@end

