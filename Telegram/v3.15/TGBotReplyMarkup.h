/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Telegram/PSCoding.h>

@class NSArray, NSString;

@interface TGBotReplyMarkup : NSObject <NSCoding, PSCoding> {

	BOOL _matchDefaultHeight;
	BOOL _hideKeyboardOnActivation;
	BOOL _alreadyActivated;
	BOOL _manuallyHidden;
	BOOL _isInline;
	int _userId;
	int _messageId;
	NSArray* _rows;

}

@property (nonatomic,readonly) int userId;                               //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) int messageId;                            //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) NSArray * rows;                           //@synthesize rows=_rows - In the implementation block
@property (assign,nonatomic) BOOL matchDefaultHeight;                    //@synthesize matchDefaultHeight=_matchDefaultHeight - In the implementation block
@property (assign,nonatomic) BOOL hideKeyboardOnActivation;              //@synthesize hideKeyboardOnActivation=_hideKeyboardOnActivation - In the implementation block
@property (assign,nonatomic) BOOL alreadyActivated;                      //@synthesize alreadyActivated=_alreadyActivated - In the implementation block
@property (assign,nonatomic) BOOL manuallyHidden;                        //@synthesize manuallyHidden=_manuallyHidden - In the implementation block
@property (assign,nonatomic) BOOL isInline;                              //@synthesize isInline=_isInline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithKeyValueCoder:(id)arg1 ;
-(void)encodeWithKeyValueCoder:(id)arg1 ;
-(BOOL)matchDefaultHeight;
-(BOOL)hideKeyboardOnActivation;
-(BOOL)alreadyActivated;
-(BOOL)manuallyHidden;
-(id)activatedMarkup;
-(id)manuallyHide;
-(id)manuallyUnhide;
-(id)initWithUserId:(int)arg1 messageId:(int)arg2 rows:(id)arg3 matchDefaultHeight:(BOOL)arg4 hideKeyboardOnActivation:(BOOL)arg5 alreadyActivated:(BOOL)arg6 manuallyHidden:(BOOL)arg7 isInline:(BOOL)arg8 ;
-(void)setMatchDefaultHeight:(BOOL)arg1 ;
-(void)setHideKeyboardOnActivation:(BOOL)arg1 ;
-(void)setAlreadyActivated:(BOOL)arg1 ;
-(void)setManuallyHidden:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)rows;
-(int)userId;
-(BOOL)isInline;
-(void)setIsInline:(BOOL)arg1 ;
-(int)messageId;
@end
