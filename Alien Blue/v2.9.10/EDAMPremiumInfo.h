/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface EDAMPremiumInfo : NSObject <NSCoding> {

	long long __currentTime;
	BOOL __premium;
	BOOL __premiumRecurring;
	long long __premiumExpirationDate;
	BOOL __premiumExtendable;
	BOOL __premiumPending;
	BOOL __premiumCancellationPending;
	BOOL __canPurchaseUploadAllowance;
	NSString* __sponsoredGroupName;
	int __sponsoredGroupRole;
	BOOL __premiumUpgradable;
	BOOL __currentTime_isset;
	BOOL __premium_isset;
	BOOL __premiumRecurring_isset;
	BOOL __premiumExpirationDate_isset;
	BOOL __premiumExtendable_isset;
	BOOL __premiumPending_isset;
	BOOL __premiumCancellationPending_isset;
	BOOL __canPurchaseUploadAllowance_isset;
	BOOL __sponsoredGroupName_isset;
	BOOL __sponsoredGroupRole_isset;
	BOOL __premiumUpgradable_isset;

}

@property (assign,setter=setCurrentTime:,getter=currentTime,nonatomic) long long currentTime; 
@property (assign,setter=setPremium:,getter=premium,nonatomic) BOOL premium; 
@property (assign,setter=setPremiumRecurring:,getter=premiumRecurring,nonatomic) BOOL premiumRecurring; 
@property (assign,setter=setPremiumExpirationDate:,getter=premiumExpirationDate,nonatomic) long long premiumExpirationDate; 
@property (assign,setter=setPremiumExtendable:,getter=premiumExtendable,nonatomic) BOOL premiumExtendable; 
@property (assign,setter=setPremiumPending:,getter=premiumPending,nonatomic) BOOL premiumPending; 
@property (assign,setter=setPremiumCancellationPending:,getter=premiumCancellationPending,nonatomic) BOOL premiumCancellationPending; 
@property (assign,setter=setCanPurchaseUploadAllowance:,getter=canPurchaseUploadAllowance,nonatomic) BOOL canPurchaseUploadAllowance; 
@property (setter=setSponsoredGroupName:,getter=sponsoredGroupName,nonatomic,retain) NSString * sponsoredGroupName; 
@property (assign,setter=setSponsoredGroupRole:,getter=sponsoredGroupRole,nonatomic) int sponsoredGroupRole; 
@property (assign,setter=setPremiumUpgradable:,getter=premiumUpgradable,nonatomic) BOOL premiumUpgradable; 
-(void)read:(id)arg1 ;
-(BOOL)currentTimeIsSet;
-(void)unsetCurrentTime;
-(void)setPremium:(BOOL)arg1 ;
-(void)setPremiumRecurring:(BOOL)arg1 ;
-(void)setPremiumExpirationDate:(long long)arg1 ;
-(void)setPremiumExtendable:(BOOL)arg1 ;
-(void)setPremiumPending:(BOOL)arg1 ;
-(void)setPremiumCancellationPending:(BOOL)arg1 ;
-(void)setCanPurchaseUploadAllowance:(BOOL)arg1 ;
-(void)setSponsoredGroupName:(NSString *)arg1 ;
-(void)setSponsoredGroupRole:(int)arg1 ;
-(void)setPremiumUpgradable:(BOOL)arg1 ;
-(id)initWithCurrentTime:(long long)arg1 premium:(BOOL)arg2 premiumRecurring:(BOOL)arg3 premiumExpirationDate:(long long)arg4 premiumExtendable:(BOOL)arg5 premiumPending:(BOOL)arg6 premiumCancellationPending:(BOOL)arg7 canPurchaseUploadAllowance:(BOOL)arg8 sponsoredGroupName:(id)arg9 sponsoredGroupRole:(int)arg10 premiumUpgradable:(BOOL)arg11 ;
-(BOOL)premium;
-(BOOL)premiumIsSet;
-(void)unsetPremium;
-(BOOL)premiumRecurring;
-(BOOL)premiumRecurringIsSet;
-(void)unsetPremiumRecurring;
-(long long)premiumExpirationDate;
-(BOOL)premiumExpirationDateIsSet;
-(void)unsetPremiumExpirationDate;
-(BOOL)premiumExtendable;
-(BOOL)premiumExtendableIsSet;
-(void)unsetPremiumExtendable;
-(BOOL)premiumPending;
-(BOOL)premiumPendingIsSet;
-(void)unsetPremiumPending;
-(BOOL)premiumCancellationPending;
-(BOOL)premiumCancellationPendingIsSet;
-(void)unsetPremiumCancellationPending;
-(BOOL)canPurchaseUploadAllowance;
-(BOOL)canPurchaseUploadAllowanceIsSet;
-(void)unsetCanPurchaseUploadAllowance;
-(NSString *)sponsoredGroupName;
-(BOOL)sponsoredGroupNameIsSet;
-(void)unsetSponsoredGroupName;
-(int)sponsoredGroupRole;
-(BOOL)sponsoredGroupRoleIsSet;
-(void)unsetSponsoredGroupRole;
-(BOOL)premiumUpgradable;
-(BOOL)premiumUpgradableIsSet;
-(void)unsetPremiumUpgradable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setCurrentTime:(long long)arg1 ;
-(long long)currentTime;
-(void)write:(id)arg1 ;
@end

