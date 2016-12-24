/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLeadGenQuestionHighlightControllerDelegate;
@class NSArray, NSMutableDictionary;

@interface FBLeadGenQuestionHighlightController : NSObject {

	NSArray* _fieldsData;
	BOOL _isEditingMode;
	id<FBLeadGenQuestionHighlightControllerDelegate> _delegate;
	NSMutableDictionary* _dataController;

}

@property (assign,nonatomic,__weak) id<FBLeadGenQuestionHighlightControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSMutableDictionary * dataController;                                   //@synthesize dataController=_dataController - In the implementation block
@property (assign,nonatomic) BOOL isEditingMode;                                                            //@synthesize isEditingMode=_isEditingMode - In the implementation block
-(BOOL)isEditingMode;
-(BOOL)shouldHighlightQuestion:(id)arg1 ;
-(void)setIsEditingMode:(BOOL)arg1 ;
-(id)initWithFieldsData:(id)arg1 ;
-(void)setDelegate:(id<FBLeadGenQuestionHighlightControllerDelegate>)arg1 ;
-(id<FBLeadGenQuestionHighlightControllerDelegate>)delegate;
-(NSMutableDictionary *)dataController;
-(void)setDataController:(NSMutableDictionary *)arg1 ;
@end
