/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FicheEquipeContentVC.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSArray, TournamentWithSeason, UILabel, UIButton, NSLayoutConstraint, PlayoffContainerView, UITableView, UIView, NSString;

@interface FicheEquipeSaisonVC : FicheEquipeContentVC <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate> {

	BOOL _defaultTournamentSelected;
	NSArray* _tournamentsArray;
	TournamentWithSeason* _selectedTournament;
	UILabel* _selectedTournamentLabel;
	UIButton* _tournamentSelectionButton;
	NSLayoutConstraint* _selectionArrowImageViewWidth;
	NSLayoutConstraint* _tournamentSelectionViewHeight;
	PlayoffContainerView* _playoffView;
	NSLayoutConstraint* _playoffHeight;
	UILabel* _playoffTitleLabel;
	UITableView* _rankingsTableView;
	UILabel* _rankingsTitleLabel;
	NSLayoutConstraint* _rankingsTopSpaceConstraint;
	NSLayoutConstraint* _rankingsHeight;
	NSLayoutConstraint* _completeRankingsButtonHeight;
	UILabel* _completeRankingsLabel;
	UIView* _topStatsView;
	UILabel* _topStatsTitleLabel;
	NSLayoutConstraint* _topStatsHeight;
	UIView* _formView;
	UILabel* _victoriesLabel;
	UILabel* _drawsLabel;
	UILabel* _defeatsLabel;
	NSLayoutConstraint* _victoriesBarWidth;
	NSLayoutConstraint* _defeatsBarWidth;
	NSLayoutConstraint* _formHeight;
	UIView* _keyStatView;
	UILabel* _keyStatValueLabel;
	UILabel* _keyStatLabel;
	NSLayoutConstraint* _keyStatHeight;
	UIView* _statsTopView;
	UILabel* _firstStatLabel;
	UILabel* _firstStatValueLabel;
	UILabel* _secondStatLabel;
	UILabel* _secondStatValueLabel;
	UILabel* _thirdStatLabel;
	UILabel* _thirdStatValueLabel;
	UILabel* _fourthStatLabel;
	UILabel* _fourthStatValueLabel;
	NSLayoutConstraint* _firstStatsRowHeight;
	NSLayoutConstraint* _secondStatsRowHeight;
	UIView* _statsBottomView;
	NSLayoutConstraint* _completeStatsButtonHeight;
	UILabel* _completeStatsLabel;
	UITableView* _topPlayersTableView;
	UILabel* _topPlayersTitleLabel;
	NSLayoutConstraint* _topPlayersHeight;

}

@property (nonatomic,retain) UILabel * selectedTournamentLabel;                               //@synthesize selectedTournamentLabel=_selectedTournamentLabel - In the implementation block
@property (nonatomic,retain) UIButton * tournamentSelectionButton;                            //@synthesize tournamentSelectionButton=_tournamentSelectionButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * selectionArrowImageViewWidth;               //@synthesize selectionArrowImageViewWidth=_selectionArrowImageViewWidth - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tournamentSelectionViewHeight;              //@synthesize tournamentSelectionViewHeight=_tournamentSelectionViewHeight - In the implementation block
@property (nonatomic,retain) PlayoffContainerView * playoffView;                              //@synthesize playoffView=_playoffView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * playoffHeight;                              //@synthesize playoffHeight=_playoffHeight - In the implementation block
@property (nonatomic,retain) UILabel * playoffTitleLabel;                                     //@synthesize playoffTitleLabel=_playoffTitleLabel - In the implementation block
@property (nonatomic,retain) UITableView * rankingsTableView;                                 //@synthesize rankingsTableView=_rankingsTableView - In the implementation block
@property (nonatomic,retain) UILabel * rankingsTitleLabel;                                    //@synthesize rankingsTitleLabel=_rankingsTitleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rankingsTopSpaceConstraint;                 //@synthesize rankingsTopSpaceConstraint=_rankingsTopSpaceConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * rankingsHeight;                             //@synthesize rankingsHeight=_rankingsHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * completeRankingsButtonHeight;               //@synthesize completeRankingsButtonHeight=_completeRankingsButtonHeight - In the implementation block
@property (nonatomic,retain) UILabel * completeRankingsLabel;                                 //@synthesize completeRankingsLabel=_completeRankingsLabel - In the implementation block
@property (nonatomic,retain) UIView * topStatsView;                                           //@synthesize topStatsView=_topStatsView - In the implementation block
@property (nonatomic,retain) UILabel * topStatsTitleLabel;                                    //@synthesize topStatsTitleLabel=_topStatsTitleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topStatsHeight;                             //@synthesize topStatsHeight=_topStatsHeight - In the implementation block
@property (nonatomic,retain) UIView * formView;                                               //@synthesize formView=_formView - In the implementation block
@property (nonatomic,retain) UILabel * victoriesLabel;                                        //@synthesize victoriesLabel=_victoriesLabel - In the implementation block
@property (nonatomic,retain) UILabel * drawsLabel;                                            //@synthesize drawsLabel=_drawsLabel - In the implementation block
@property (nonatomic,retain) UILabel * defeatsLabel;                                          //@synthesize defeatsLabel=_defeatsLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * victoriesBarWidth;                          //@synthesize victoriesBarWidth=_victoriesBarWidth - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * defeatsBarWidth;                            //@synthesize defeatsBarWidth=_defeatsBarWidth - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * formHeight;                                 //@synthesize formHeight=_formHeight - In the implementation block
@property (nonatomic,retain) UIView * keyStatView;                                            //@synthesize keyStatView=_keyStatView - In the implementation block
@property (nonatomic,retain) UILabel * keyStatValueLabel;                                     //@synthesize keyStatValueLabel=_keyStatValueLabel - In the implementation block
@property (nonatomic,retain) UILabel * keyStatLabel;                                          //@synthesize keyStatLabel=_keyStatLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * keyStatHeight;                              //@synthesize keyStatHeight=_keyStatHeight - In the implementation block
@property (nonatomic,retain) UIView * statsTopView;                                           //@synthesize statsTopView=_statsTopView - In the implementation block
@property (nonatomic,retain) UILabel * firstStatLabel;                                        //@synthesize firstStatLabel=_firstStatLabel - In the implementation block
@property (nonatomic,retain) UILabel * firstStatValueLabel;                                   //@synthesize firstStatValueLabel=_firstStatValueLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondStatLabel;                                       //@synthesize secondStatLabel=_secondStatLabel - In the implementation block
@property (nonatomic,retain) UILabel * secondStatValueLabel;                                  //@synthesize secondStatValueLabel=_secondStatValueLabel - In the implementation block
@property (nonatomic,retain) UILabel * thirdStatLabel;                                        //@synthesize thirdStatLabel=_thirdStatLabel - In the implementation block
@property (nonatomic,retain) UILabel * thirdStatValueLabel;                                   //@synthesize thirdStatValueLabel=_thirdStatValueLabel - In the implementation block
@property (nonatomic,retain) UILabel * fourthStatLabel;                                       //@synthesize fourthStatLabel=_fourthStatLabel - In the implementation block
@property (nonatomic,retain) UILabel * fourthStatValueLabel;                                  //@synthesize fourthStatValueLabel=_fourthStatValueLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * firstStatsRowHeight;                        //@synthesize firstStatsRowHeight=_firstStatsRowHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * secondStatsRowHeight;                       //@synthesize secondStatsRowHeight=_secondStatsRowHeight - In the implementation block
@property (nonatomic,retain) UIView * statsBottomView;                                        //@synthesize statsBottomView=_statsBottomView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * completeStatsButtonHeight;                  //@synthesize completeStatsButtonHeight=_completeStatsButtonHeight - In the implementation block
@property (nonatomic,retain) UILabel * completeStatsLabel;                                    //@synthesize completeStatsLabel=_completeStatsLabel - In the implementation block
@property (nonatomic,retain) UITableView * topPlayersTableView;                               //@synthesize topPlayersTableView=_topPlayersTableView - In the implementation block
@property (nonatomic,retain) UILabel * topPlayersTitleLabel;                                  //@synthesize topPlayersTitleLabel=_topPlayersTitleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topPlayersHeight;                           //@synthesize topPlayersHeight=_topPlayersHeight - In the implementation block
@property (assign,nonatomic) BOOL defaultTournamentSelected;                                  //@synthesize defaultTournamentSelected=_defaultTournamentSelected - In the implementation block
@property (nonatomic,retain) NSArray * tournamentsArray;                                      //@synthesize tournamentsArray=_tournamentsArray - In the implementation block
@property (nonatomic,retain) TournamentWithSeason * selectedTournament;                       //@synthesize selectedTournament=_selectedTournament - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TournamentWithSeason *)selectedTournament;
-(void)allowTournamentSelection:(BOOL)arg1 ;
-(NSArray *)tournamentsArray;
-(UILabel *)drawsLabel;
-(double)neededHeight;
-(void)setTournamentsArray:(NSArray *)arg1 ;
-(void)setDrawsLabel:(UILabel *)arg1 ;
-(void)setDefaultTournamentSelected:(BOOL)arg1 ;
-(UILabel *)topStatsTitleLabel;
-(void)initializeCurrentTournament;
-(UILabel *)selectedTournamentLabel;
-(void)updateTopStatsViewDisplay;
-(NSLayoutConstraint *)tournamentSelectionViewHeight;
-(NSLayoutConstraint *)topStatsHeight;
-(NSLayoutConstraint *)selectionArrowImageViewWidth;
-(UIButton *)tournamentSelectionButton;
-(void)setSelectedTournament:(TournamentWithSeason *)arg1 ;
-(BOOL)defaultTournamentSelected;
-(void)selectDefaultTournament;
-(UIView *)topStatsView;
-(void)updateTopStats;
-(NSLayoutConstraint *)firstStatsRowHeight;
-(NSLayoutConstraint *)secondStatsRowHeight;
-(UILabel *)firstStatLabel;
-(UILabel *)firstStatValueLabel;
-(UILabel *)secondStatLabel;
-(UILabel *)secondStatValueLabel;
-(UILabel *)thirdStatLabel;
-(UILabel *)thirdStatValueLabel;
-(UILabel *)fourthStatLabel;
-(UILabel *)fourthStatValueLabel;
-(void)selectCurrentTournamentRow;
-(void)openTournamentSelection:(id)arg1 ;
-(void)confirmPickerSelection;
-(void)setSelectedTournamentLabel:(UILabel *)arg1 ;
-(void)setTournamentSelectionButton:(UIButton *)arg1 ;
-(void)setSelectionArrowImageViewWidth:(NSLayoutConstraint *)arg1 ;
-(void)setTournamentSelectionViewHeight:(NSLayoutConstraint *)arg1 ;
-(void)setTopStatsView:(UIView *)arg1 ;
-(void)setTopStatsTitleLabel:(UILabel *)arg1 ;
-(void)setTopStatsHeight:(NSLayoutConstraint *)arg1 ;
-(void)setFirstStatLabel:(UILabel *)arg1 ;
-(void)setFirstStatValueLabel:(UILabel *)arg1 ;
-(void)setSecondStatLabel:(UILabel *)arg1 ;
-(void)setSecondStatValueLabel:(UILabel *)arg1 ;
-(void)setThirdStatLabel:(UILabel *)arg1 ;
-(void)setThirdStatValueLabel:(UILabel *)arg1 ;
-(void)setFourthStatLabel:(UILabel *)arg1 ;
-(void)setFourthStatValueLabel:(UILabel *)arg1 ;
-(void)setFirstStatsRowHeight:(NSLayoutConstraint *)arg1 ;
-(void)setSecondStatsRowHeight:(NSLayoutConstraint *)arg1 ;
-(UITableView *)rankingsTableView;
-(void)setRankingsTableView:(UITableView *)arg1 ;
-(UILabel *)playoffTitleLabel;
-(UILabel *)rankingsTitleLabel;
-(UILabel *)completeRankingsLabel;
-(UILabel *)completeStatsLabel;
-(UILabel *)topPlayersTitleLabel;
-(void)updatePlayoffs;
-(NSLayoutConstraint *)completeRankingsButtonHeight;
-(NSLayoutConstraint *)rankingsHeight;
-(UITableView *)topPlayersTableView;
-(NSLayoutConstraint *)topPlayersHeight;
-(NSLayoutConstraint *)rankingsTopSpaceConstraint;
-(PlayoffContainerView *)playoffView;
-(void)updatePlayoffsView:(id)arg1 withObject:(id)arg2 ;
-(void)updatePlayoffStateView:(id)arg1 withMatch:(id)arg2 andInvertTeams:(BOOL)arg3 ;
-(NSLayoutConstraint *)playoffHeight;
-(void)updateFormView;
-(NSLayoutConstraint *)formHeight;
-(UILabel *)keyStatLabel;
-(UILabel *)keyStatValueLabel;
-(UIView *)keyStatView;
-(NSLayoutConstraint *)completeStatsButtonHeight;
-(UIView *)formView;
-(NSLayoutConstraint *)victoriesBarWidth;
-(NSLayoutConstraint *)defeatsBarWidth;
-(UILabel *)victoriesLabel;
-(UILabel *)defeatsLabel;
-(void)openCompleteRankingsModalVC:(id)arg1 ;
-(void)openCompleteStatsModalVC:(id)arg1 ;
-(void)setPlayoffView:(PlayoffContainerView *)arg1 ;
-(void)setPlayoffHeight:(NSLayoutConstraint *)arg1 ;
-(void)setPlayoffTitleLabel:(UILabel *)arg1 ;
-(void)setRankingsTitleLabel:(UILabel *)arg1 ;
-(void)setRankingsTopSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRankingsHeight:(NSLayoutConstraint *)arg1 ;
-(void)setCompleteRankingsButtonHeight:(NSLayoutConstraint *)arg1 ;
-(void)setCompleteRankingsLabel:(UILabel *)arg1 ;
-(void)setFormView:(UIView *)arg1 ;
-(void)setVictoriesLabel:(UILabel *)arg1 ;
-(void)setDefeatsLabel:(UILabel *)arg1 ;
-(void)setVictoriesBarWidth:(NSLayoutConstraint *)arg1 ;
-(void)setDefeatsBarWidth:(NSLayoutConstraint *)arg1 ;
-(void)setFormHeight:(NSLayoutConstraint *)arg1 ;
-(void)setKeyStatView:(UIView *)arg1 ;
-(void)setKeyStatValueLabel:(UILabel *)arg1 ;
-(void)setKeyStatLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)keyStatHeight;
-(void)setKeyStatHeight:(NSLayoutConstraint *)arg1 ;
-(UIView *)statsTopView;
-(void)setStatsTopView:(UIView *)arg1 ;
-(UIView *)statsBottomView;
-(void)setStatsBottomView:(UIView *)arg1 ;
-(void)setCompleteStatsButtonHeight:(NSLayoutConstraint *)arg1 ;
-(void)setCompleteStatsLabel:(UILabel *)arg1 ;
-(void)setTopPlayersTableView:(UITableView *)arg1 ;
-(void)setTopPlayersTitleLabel:(UILabel *)arg1 ;
-(void)setTopPlayersHeight:(NSLayoutConstraint *)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)refreshView;
@end
