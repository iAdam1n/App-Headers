/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface ECAPIPaymentMethod : NSObject {

	BOOL _ccSaveForFuture;
	NSString* _identifier;
	NSString* _type;
	NSString* _name;
	NSString* _ccName;
	NSString* _ccNumber;
	NSString* _ccExpire;
	NSString* _ccVerificationNumber;
	NSString* _status;
	NSString* _provider;
	NSString* _transactionCode;
	NSString* _redirectUrl;

}

@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * ccName;                            //@synthesize ccName=_ccName - In the implementation block
@property (nonatomic,retain) NSString * ccNumber;                          //@synthesize ccNumber=_ccNumber - In the implementation block
@property (nonatomic,retain) NSString * ccExpire;                          //@synthesize ccExpire=_ccExpire - In the implementation block
@property (nonatomic,retain) NSString * ccVerificationNumber;              //@synthesize ccVerificationNumber=_ccVerificationNumber - In the implementation block
@property (assign,nonatomic) BOOL ccSaveForFuture;                         //@synthesize ccSaveForFuture=_ccSaveForFuture - In the implementation block
@property (nonatomic,retain) NSString * status;                            //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * provider;                          //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSString * transactionCode;                   //@synthesize transactionCode=_transactionCode - In the implementation block
@property (nonatomic,retain) NSString * redirectUrl;                       //@synthesize redirectUrl=_redirectUrl - In the implementation block
-(NSString *)ccNumber;
-(BOOL)ccSaveForFuture;
-(void)setCcSaveForFuture:(BOOL)arg1 ;
-(NSString *)ccExpire;
-(void)setCcExpire:(NSString *)arg1 ;
-(NSString *)ccName;
-(void)setCcName:(NSString *)arg1 ;
-(void)setCcNumber:(NSString *)arg1 ;
-(NSString *)ccVerificationNumber;
-(void)setCcVerificationNumber:(NSString *)arg1 ;
-(NSString *)transactionCode;
-(void)setTransactionCode:(NSString *)arg1 ;
-(NSString *)redirectUrl;
-(void)setRedirectUrl:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
@end

