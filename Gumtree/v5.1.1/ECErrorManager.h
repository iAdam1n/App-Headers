/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ECErrorManager : NSObject {

	NSMutableArray* _currentMessages;

}

@property (nonatomic,retain) NSMutableArray * currentMessages;              //@synthesize currentMessages=_currentMessages - In the implementation block
+(id)sharedManager;
+(void)setSharedManager:(id)arg1 ;
-(void)displayError:(id)arg1 ;
-(void)displayError:(id)arg1 withTitle:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCurrentMessages:(NSMutableArray *)arg1 ;
-(id)errorWithFilledInLocalizedErrorReasonForError:(id)arg1 ;
-(void)showUniqueAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)displayError:(id)arg1 withTitle:(id)arg2 ;
-(id)init;
-(NSMutableArray *)currentMessages;
@end

