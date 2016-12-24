/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FicheMatchVC.h>

@class Pays, UIImageView, UIView, UIButton, UILabel;

@interface FicheMatchTennisVC : FicheMatchVC {

	Pays* currentTournamentType;
	UIImageView* backgroundImageView;
	UIImageView* team1AltLogoImageView;
	UIImageView* team2AltLogoImageView;
	UIView* noSetsSubview;
	UIView* setsSubview;
	UIButton* setsJoueur1FavoriteButton;
	UIButton* setsJoueur2FavoriteButton;
	UILabel* setsNomJoueur1Label;
	UILabel* setsNomJoueur2Label;
	UIImageView* service1ImageView;
	UIImageView* service2ImageView;
	UILabel* s1HeaderLabel;
	UILabel* s1Joueur1Label;
	UILabel* s1Joueur2Label;
	UILabel* s2HeaderLabel;
	UILabel* s2Joueur1Label;
	UILabel* s2Joueur2Label;
	UILabel* s3HeaderLabel;
	UILabel* s3Joueur1Label;
	UILabel* s3Joueur2Label;
	UILabel* s4HeaderLabel;
	UILabel* s4Joueur1Label;
	UILabel* s4Joueur2Label;
	UILabel* s5HeaderLabel;
	UILabel* s5Joueur1Label;
	UILabel* s5Joueur2Label;

}

@property (nonatomic,retain) Pays * currentTournamentType; 
@property (nonatomic,retain) UIImageView * backgroundImageView; 
@property (nonatomic,retain) UIImageView * team1AltLogoImageView; 
@property (nonatomic,retain) UIImageView * team2AltLogoImageView; 
@property (nonatomic,retain) UIView * noSetsSubview; 
@property (nonatomic,retain) UIView * setsSubview; 
@property (nonatomic,retain) UIButton * setsJoueur1FavoriteButton; 
@property (nonatomic,retain) UIButton * setsJoueur2FavoriteButton; 
@property (nonatomic,retain) UILabel * setsNomJoueur1Label; 
@property (nonatomic,retain) UILabel * setsNomJoueur2Label; 
@property (nonatomic,retain) UIImageView * service1ImageView; 
@property (nonatomic,retain) UIImageView * service2ImageView; 
@property (nonatomic,retain) UILabel * s1HeaderLabel; 
@property (nonatomic,retain) UILabel * s1Joueur1Label; 
@property (nonatomic,retain) UILabel * s1Joueur2Label; 
@property (nonatomic,retain) UILabel * s2HeaderLabel; 
@property (nonatomic,retain) UILabel * s2Joueur1Label; 
@property (nonatomic,retain) UILabel * s2Joueur2Label; 
@property (nonatomic,retain) UILabel * s3HeaderLabel; 
@property (nonatomic,retain) UILabel * s3Joueur1Label; 
@property (nonatomic,retain) UILabel * s3Joueur2Label; 
@property (nonatomic,retain) UILabel * s4HeaderLabel; 
@property (nonatomic,retain) UILabel * s4Joueur1Label; 
@property (nonatomic,retain) UILabel * s4Joueur2Label; 
@property (nonatomic,retain) UILabel * s5HeaderLabel; 
@property (nonatomic,retain) UILabel * s5Joueur1Label; 
@property (nonatomic,retain) UILabel * s5Joueur2Label; 
-(id)flurryTag;
-(void)setupFirstDisplay;
-(UIView *)noSetsSubview;
-(UIView *)setsSubview;
-(void)fillSetsSubviewAndUpdateScoreLabel;
-(void)setupDisplayOfFavoriteButton:(unsigned long long)arg1 ;
-(void)favoriteChange:(id)arg1 ;
-(void)updateStateLabel;
-(void)updateScoreLabels;
-(void)setImagesEquipes;
-(Pays *)currentTournamentType;
-(void)setCurrentTournamentType:(Pays *)arg1 ;
-(void)setNoSetsSubview:(UIView *)arg1 ;
-(void)setSetsSubview:(UIView *)arg1 ;
-(UILabel *)s1HeaderLabel;
-(void)setS1HeaderLabel:(UILabel *)arg1 ;
-(UILabel *)s2HeaderLabel;
-(void)setS2HeaderLabel:(UILabel *)arg1 ;
-(UILabel *)s3HeaderLabel;
-(void)setS3HeaderLabel:(UILabel *)arg1 ;
-(UILabel *)s4HeaderLabel;
-(void)setS4HeaderLabel:(UILabel *)arg1 ;
-(UILabel *)s5HeaderLabel;
-(void)setS5HeaderLabel:(UILabel *)arg1 ;
-(UIImageView *)service1ImageView;
-(void)setService1ImageView:(UIImageView *)arg1 ;
-(UIImageView *)service2ImageView;
-(void)setService2ImageView:(UIImageView *)arg1 ;
-(UILabel *)setsNomJoueur1Label;
-(UILabel *)setsNomJoueur2Label;
-(void)updateServiceImageDisplay;
-(UIImageView *)team1AltLogoImageView;
-(UIImageView *)team2AltLogoImageView;
-(UIButton *)setsJoueur1FavoriteButton;
-(UIButton *)setsJoueur2FavoriteButton;
-(void)setTeam1AltLogoImageView:(UIImageView *)arg1 ;
-(void)setTeam2AltLogoImageView:(UIImageView *)arg1 ;
-(void)setSetsJoueur1FavoriteButton:(UIButton *)arg1 ;
-(void)setSetsJoueur2FavoriteButton:(UIButton *)arg1 ;
-(void)setSetsNomJoueur1Label:(UILabel *)arg1 ;
-(void)setSetsNomJoueur2Label:(UILabel *)arg1 ;
-(UILabel *)s1Joueur1Label;
-(void)setS1Joueur1Label:(UILabel *)arg1 ;
-(UILabel *)s1Joueur2Label;
-(void)setS1Joueur2Label:(UILabel *)arg1 ;
-(UILabel *)s2Joueur1Label;
-(void)setS2Joueur1Label:(UILabel *)arg1 ;
-(UILabel *)s2Joueur2Label;
-(void)setS2Joueur2Label:(UILabel *)arg1 ;
-(UILabel *)s3Joueur1Label;
-(void)setS3Joueur1Label:(UILabel *)arg1 ;
-(UILabel *)s3Joueur2Label;
-(void)setS3Joueur2Label:(UILabel *)arg1 ;
-(UILabel *)s4Joueur1Label;
-(void)setS4Joueur1Label:(UILabel *)arg1 ;
-(UILabel *)s4Joueur2Label;
-(void)setS4Joueur2Label:(UILabel *)arg1 ;
-(UILabel *)s5Joueur1Label;
-(void)setS5Joueur1Label:(UILabel *)arg1 ;
-(UILabel *)s5Joueur2Label;
-(void)setS5Joueur2Label:(UILabel *)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIImageView *)backgroundImageView;
-(void)viewDidLoad;
-(void)refreshView;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end
