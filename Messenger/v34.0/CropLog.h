/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface CropLog : NSObject {

	BOOL _deleted;
	BOOL _shownInComposer;
	BOOL _usedEdgeControl;
	BOOL _usedCornerControl;
	BOOL _usedPanControl;
	BOOL _usedSquareEdgeControl;
	BOOL _usedSquareCornerControl;
	BOOL _usedSquarePanControl;
	BOOL _fixedAspectRatioCroppingEnabled;
	BOOL _croppedBySquareButton;
	unsigned long long _entryCount;
	unsigned long long _cropAdjustmentCount;
	unsigned long long _squareCropAdjustmentCount;
	long long _rotationCount;
	long long _originalButtonTapCount;
	long long _squareButtonTapCount;
	double _editedAspectRatio;
	double _originalAspectRatio;

}

@property (assign,nonatomic) unsigned long long entryCount;                             //@synthesize entryCount=_entryCount - In the implementation block
@property (assign,nonatomic) BOOL deleted;                                              //@synthesize deleted=_deleted - In the implementation block
@property (assign,nonatomic) BOOL shownInComposer;                                      //@synthesize shownInComposer=_shownInComposer - In the implementation block
@property (assign,nonatomic) unsigned long long cropAdjustmentCount;                    //@synthesize cropAdjustmentCount=_cropAdjustmentCount - In the implementation block
@property (assign,nonatomic) unsigned long long squareCropAdjustmentCount;              //@synthesize squareCropAdjustmentCount=_squareCropAdjustmentCount - In the implementation block
@property (assign,nonatomic) long long rotationCount;                                   //@synthesize rotationCount=_rotationCount - In the implementation block
@property (assign,nonatomic) long long originalButtonTapCount;                          //@synthesize originalButtonTapCount=_originalButtonTapCount - In the implementation block
@property (assign,nonatomic) long long squareButtonTapCount;                            //@synthesize squareButtonTapCount=_squareButtonTapCount - In the implementation block
@property (assign,nonatomic) double editedAspectRatio;                                  //@synthesize editedAspectRatio=_editedAspectRatio - In the implementation block
@property (assign,nonatomic) double originalAspectRatio;                                //@synthesize originalAspectRatio=_originalAspectRatio - In the implementation block
@property (assign,nonatomic) BOOL usedEdgeControl;                                      //@synthesize usedEdgeControl=_usedEdgeControl - In the implementation block
@property (assign,nonatomic) BOOL usedCornerControl;                                    //@synthesize usedCornerControl=_usedCornerControl - In the implementation block
@property (assign,nonatomic) BOOL usedPanControl;                                       //@synthesize usedPanControl=_usedPanControl - In the implementation block
@property (assign,nonatomic) BOOL usedSquareEdgeControl;                                //@synthesize usedSquareEdgeControl=_usedSquareEdgeControl - In the implementation block
@property (assign,nonatomic) BOOL usedSquareCornerControl;                              //@synthesize usedSquareCornerControl=_usedSquareCornerControl - In the implementation block
@property (assign,nonatomic) BOOL usedSquarePanControl;                                 //@synthesize usedSquarePanControl=_usedSquarePanControl - In the implementation block
@property (assign,nonatomic) BOOL fixedAspectRatioCroppingEnabled;                      //@synthesize fixedAspectRatioCroppingEnabled=_fixedAspectRatioCroppingEnabled - In the implementation block
@property (assign,nonatomic) BOOL croppedBySquareButton;                                //@synthesize croppedBySquareButton=_croppedBySquareButton - In the implementation block
-(void)setEntryCount:(unsigned long long)arg1 ;
-(BOOL)shownInComposer;
-(void)setShownInComposer:(BOOL)arg1 ;
-(unsigned long long)cropAdjustmentCount;
-(void)setCropAdjustmentCount:(unsigned long long)arg1 ;
-(unsigned long long)squareCropAdjustmentCount;
-(void)setSquareCropAdjustmentCount:(unsigned long long)arg1 ;
-(long long)rotationCount;
-(void)setRotationCount:(long long)arg1 ;
-(long long)originalButtonTapCount;
-(void)setOriginalButtonTapCount:(long long)arg1 ;
-(long long)squareButtonTapCount;
-(void)setSquareButtonTapCount:(long long)arg1 ;
-(double)editedAspectRatio;
-(void)setEditedAspectRatio:(double)arg1 ;
-(double)originalAspectRatio;
-(void)setOriginalAspectRatio:(double)arg1 ;
-(BOOL)usedEdgeControl;
-(void)setUsedEdgeControl:(BOOL)arg1 ;
-(BOOL)usedCornerControl;
-(void)setUsedCornerControl:(BOOL)arg1 ;
-(BOOL)usedPanControl;
-(void)setUsedPanControl:(BOOL)arg1 ;
-(BOOL)usedSquareEdgeControl;
-(void)setUsedSquareEdgeControl:(BOOL)arg1 ;
-(BOOL)usedSquareCornerControl;
-(void)setUsedSquareCornerControl:(BOOL)arg1 ;
-(BOOL)usedSquarePanControl;
-(void)setUsedSquarePanControl:(BOOL)arg1 ;
-(BOOL)fixedAspectRatioCroppingEnabled;
-(void)setFixedAspectRatioCroppingEnabled:(BOOL)arg1 ;
-(BOOL)croppedBySquareButton;
-(void)setCroppedBySquareButton:(BOOL)arg1 ;
-(id)init;
-(BOOL)deleted;
-(void)setDeleted:(BOOL)arg1 ;
-(unsigned long long)entryCount;
@end

