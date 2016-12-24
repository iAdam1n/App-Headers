/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSDKLikeDialogDelegate;
@class NSString, UIViewController;

@interface FBSDKLikeDialog : NSObject {

	BOOL _shouldFailOnDataError;
	id<FBSDKLikeDialogDelegate> _delegate;
	NSString* _objectID;
	unsigned long long _objectType;
	UIViewController* _fromViewController;

}

@property (assign,nonatomic,__weak) id<FBSDKLikeDialogDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * objectID;                                         //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) unsigned long long objectType;                             //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL shouldFailOnDataError;                                //@synthesize shouldFailOnDataError=_shouldFailOnDataError - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * fromViewController;              //@synthesize fromViewController=_fromViewController - In the implementation block
+(id)likeWithObjectID:(id)arg1 objectType:(unsigned long long)arg2 delegate:(id)arg3 ;
+(void)initialize;
-(void)setFromViewController:(UIViewController *)arg1 ;
-(BOOL)like;
-(BOOL)canLike;
-(BOOL)_canLikeNative;
-(BOOL)shouldFailOnDataError;
-(void)setShouldFailOnDataError:(BOOL)arg1 ;
-(void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2 ;
-(void)setDelegate:(id<FBSDKLikeDialogDelegate>)arg1 ;
-(id<FBSDKLikeDialogDelegate>)delegate;
-(UIViewController *)fromViewController;
-(BOOL)validateWithError:(id*)arg1 ;
-(NSString *)objectID;
-(void)setObjectType:(unsigned long long)arg1 ;
-(unsigned long long)objectType;
-(void)setObjectID:(NSString *)arg1 ;
@end
