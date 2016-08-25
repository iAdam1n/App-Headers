/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CropViewControllerDelegate <NSObject>
@property (assign) SCD_Struct_Cr15 landscapePosition; 
@property (assign) SCD_Struct_Cr15 portraitPosition; 
@property (readonly) BOOL selectForBothOrientations; 
@required
-(void)selectionCancelled:(BOOL)arg1;
-(BOOL)selectForBothOrientations;
-(void)loadStoredLocation;
-(void)bestGuessImagesMadeAtPortraitName:(id)arg1 landscapeName:(id)arg2;
-(void)setLandscapePosition:(SCD_Struct_Cr15)arg1;
-(void)setPortraitPosition:(SCD_Struct_Cr15)arg1;
-(void)selectionDone:(id)arg1;
-(void)cropViewModificationCancelled;
-(SCD_Struct_Cr15)landscapePosition;
-(SCD_Struct_Cr15)portraitPosition;

@end

