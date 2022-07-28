#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.5.1 (swiftlang-1300.0.31.4 clang-1300.0.29.6)
#ifndef PAYUCHECKOUTPROKIT_SWIFT_H
#define PAYUCHECKOUTPROKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PayUCheckoutProKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;

SWIFT_CLASS("_TtC18PayUCheckoutProKit9BankCodes")
@interface BankCodes : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull paytmWallet;)
+ (NSString * _Nonnull)paytmWallet SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull phonePeWallet;)
+ (NSString * _Nonnull)phonePeWallet SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull gPayUPI;)
+ (NSString * _Nonnull)gPayUPI SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull intent;)
+ (NSString * _Nonnull)intent SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC18PayUCheckoutProKit12HashConstant")
@interface HashConstant : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull hashString;)
+ (NSString * _Nonnull)hashString SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull hashName;)
+ (NSString * _Nonnull)hashName SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull payment;)
+ (NSString * _Nonnull)payment SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull paymentRelatedDetailForMobileSDK;)
+ (NSString * _Nonnull)paymentRelatedDetailForMobileSDK SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull vasForMobileSDK;)
+ (NSString * _Nonnull)vasForMobileSDK SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull checkIsDomestic;)
+ (NSString * _Nonnull)checkIsDomestic SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull getBinInfo;)
+ (NSString * _Nonnull)getBinInfo SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull olaEligibility;)
+ (NSString * _Nonnull)olaEligibility SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull validateVPA;)
+ (NSString * _Nonnull)validateVPA SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull getEmiAmountAccordingToInterest;)
+ (NSString * _Nonnull)getEmiAmountAccordingToInterest SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull eligibleBinsForEMI;)
+ (NSString * _Nonnull)eligibleBinsForEMI SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull deleteUserCard;)
+ (NSString * _Nonnull)deleteUserCard SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull offerDetail;)
+ (NSString * _Nonnull)offerDetail SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull getCheckoutDetails;)
+ (NSString * _Nonnull)getCheckoutDetails SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull mcpLookup;)
+ (NSString * _Nonnull)mcpLookup SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull checkBalance;)
+ (NSString * _Nonnull)checkBalance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSNotification (SWIFT_EXTENSION(PayUCheckoutProKit))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSNotificationName _Nonnull payuRefreshSodexoView;)
+ (NSNotificationName _Nonnull)payuRefreshSodexoView SWIFT_WARN_UNUSED_RESULT;
@end



@class UIViewController;
@class PayUPaymentParam;
@class PayUCheckoutProConfig;
@protocol PayUCheckoutProDelegate;
@class BaseLayer;

SWIFT_CLASS("_TtC18PayUCheckoutProKit15PayUCheckoutPro")
@interface PayUCheckoutPro : NSObject
+ (void)openOn:(UIViewController * _Nonnull)parentVC paymentParam:(PayUPaymentParam * _Nonnull)paymentParam config:(PayUCheckoutProConfig * _Nullable)config delegate:(id <PayUCheckoutProDelegate> _Nonnull)delegate;
+ (void)start;
+ (void)openOn:(UIViewController * _Nonnull)parentVC apiLayer:(BaseLayer * _Nonnull)apiLayer delegate:(id <PayUCheckoutProDelegate> _Nonnull)delegate;
+ (void)sdkCrash;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;

SWIFT_PROTOCOL("_TtP18PayUCheckoutProKit23PayUCheckoutProDelegate_")
@protocol PayUCheckoutProDelegate
- (void)onPaymentSuccessWithResponse:(id _Nullable)response;
- (void)onPaymentFailureWithResponse:(id _Nullable)response;
- (void)onPaymentCancelWithIsTxnInitiated:(BOOL)isTxnInitiated;
- (void)onError:(NSError * _Nullable)error;
- (void)generateHashFor:(NSDictionary<NSString *, NSString *> * _Nonnull)param onCompletion:(void (^ _Nonnull)(NSDictionary<NSString *, NSString *> * _Nonnull))onCompletion;
@end


@class UIColor;
@class NSCoder;

SWIFT_CLASS("_TtC18PayUCheckoutProKit10PayUPopTip")
@interface PayUPopTip : UIView
/// The <code>UIColor</code> of the text
@property (nonatomic, strong) UIColor * _Nonnull textColor;
/// The <code>NSTextAlignment</code> of the text
@property (nonatomic) NSTextAlignment textAlignment;
/// The <code>UIColor</code> for the poptip’s background
@property (nonatomic, strong) UIColor * _Nonnull bubbleColor;
/// The <code>UIColor</code> for the poptip’s bordedr
@property (nonatomic, strong) UIColor * _Nonnull tipBorderColor;
/// The width for the poptip’s border
@property (nonatomic) CGFloat tipBorderWidth;
/// The <code>Double</code> with the poptip’s border radius
@property (nonatomic) CGFloat tipCornerRadius;
/// The <code>BOOL</code> that determines wether the poptip is rounded. If set to <code>true</code> the radius will equal <code>frame.height / 2</code>
@property (nonatomic) BOOL isRounded;
/// The <code>UIColor</code> with the poptip’s shadow color
@property (nonatomic, strong) UIColor * _Nonnull tipShadowColor;
/// The <code>CGSize</code> with the poptip’s shadow offset
@property (nonatomic) CGSize tipShadowOffset;
/// The <code>Float</code> with the poptip’s shadow radius
@property (nonatomic) float tipShadowRadius;
/// The <code>Float</code> with the poptip’s shadow opacity
@property (nonatomic) float tipShadowOpacity;
/// Holds the offset between the poptip and origin
@property (nonatomic) CGFloat offset;
/// Holds the CGFloat with the padding used for the inner text
@property (nonatomic) CGFloat padding;
/// Holds the insets setting for padding different direction
@property (nonatomic) UIEdgeInsets edgeInsets;
/// Holds the CGSize with the width and height of the arrow
@property (nonatomic) CGSize arrowSize;
/// CGfloat value that determines the radius of the vertex for the pointing arrow
@property (nonatomic) CGFloat arrowRadius;
/// Holds the NSTimeInterval with the duration of the revealing animation
@property (nonatomic) NSTimeInterval animationIn;
/// Holds the NSTimeInterval with the duration of the disappearing animation
@property (nonatomic) NSTimeInterval animationOut;
/// Holds the NSTimeInterval with the delay of the revealing animation
@property (nonatomic) NSTimeInterval delayIn;
/// Holds the NSTimeInterval with the delay of the disappearing animation
@property (nonatomic) NSTimeInterval delayOut;
/// Holds the NSTimeInterval with the duration of the action animation
@property (nonatomic) NSTimeInterval actionAnimationIn;
/// Holds the NSTimeInterval with the duration of the action stop animation
@property (nonatomic) NSTimeInterval actionAnimationOut;
/// Holds the NSTimeInterval with the delay of the action animation
@property (nonatomic) NSTimeInterval actionDelayIn;
/// Holds the NSTimeInterval with the delay of the action animation stop
@property (nonatomic) NSTimeInterval actionDelayOut;
/// CGfloat value that determines the leftmost margin from the screen
@property (nonatomic) CGFloat edgeMargin;
/// Holds the offset between the bubble and origin
@property (nonatomic) CGFloat bubbleOffset;
/// Holds the offset between the center of the bubble and the arrow
@property (nonatomic) CGFloat arrowOffset;
/// Color of the mask that is going to dim the background when the pop up is visible
@property (nonatomic, strong) UIColor * _Nonnull maskColor;
/// Flag to enable or disable background mask
@property (nonatomic) BOOL shouldShowMask;
/// Flag to enable or disable the checks that make sure that the tip does not extend over the container
@property (nonatomic) BOOL constrainInContainerView;
/// A boolean value that determines whether the poptip is dismissed on tap.
@property (nonatomic) BOOL shouldDismissOnTap;
/// A boolean value that determines whether to dismiss when tapping outside the poptip.
@property (nonatomic) BOOL shouldDismissOnTapOutside;
/// A boolean value that determines whether to consider the originating frame as part of the poptip,
/// i.e wether to call the <code>tapHandler</code> or the <code>tapOutsideHandler</code> when the tap occurs in the <code>from</code> frame.
@property (nonatomic) BOOL shouldConsiderOriginatingFrameAsPopTip;
/// A boolean value that determines whether to dismiss when swiping outside the poptip.
@property (nonatomic) BOOL shouldDismissOnSwipeOutside;
/// A boolean value that determines if the action animation should start automatically when the poptip is shown
@property (nonatomic) BOOL startActionAnimationOnShow;
/// Custom draw override
/// \param rect the rect occupied by the view
///
- (void)drawRect:(CGRect)rect;
/// Hides the poptip and removes it from the view. The property <code>isVisible</code> will be set to <code>false</code> when the animation is complete and the poptip is removed from the parent view.
/// \param forced Force the removal, ignoring running animations
///
- (void)hideWithForced:(BOOL)forced;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC18PayUCheckoutProKit20PaymentParamConstant")
@interface PaymentParamConstant : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull udf1;)
+ (NSString * _Nonnull)udf1 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull udf2;)
+ (NSString * _Nonnull)udf2 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull udf3;)
+ (NSString * _Nonnull)udf3 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull udf4;)
+ (NSString * _Nonnull)udf4 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull udf5;)
+ (NSString * _Nonnull)udf5 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull merchantAccessKey;)
+ (NSString * _Nonnull)merchantAccessKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull sourceId;)
+ (NSString * _Nonnull)sourceId SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull paymentType;)
+ (NSString * _Nonnull)paymentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull cardType;)
+ (NSString * _Nonnull)cardType SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18PayUCheckoutProKit23PaymentResponseConstant")
@interface PaymentResponseConstant : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull payuResponse;)
+ (NSString * _Nonnull)payuResponse SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull merchantResponse;)
+ (NSString * _Nonnull)merchantResponse SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end












#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.5.1 (swiftlang-1300.0.31.4 clang-1300.0.29.6)
#ifndef PAYUCHECKOUTPROKIT_SWIFT_H
#define PAYUCHECKOUTPROKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PayUCheckoutProKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;

SWIFT_CLASS("_TtC18PayUCheckoutProKit9BankCodes")
@interface BankCodes : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull paytmWallet;)
+ (NSString * _Nonnull)paytmWallet SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull phonePeWallet;)
+ (NSString * _Nonnull)phonePeWallet SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull gPayUPI;)
+ (NSString * _Nonnull)gPayUPI SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull intent;)
+ (NSString * _Nonnull)intent SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC18PayUCheckoutProKit12HashConstant")
@interface HashConstant : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull hashString;)
+ (NSString * _Nonnull)hashString SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull hashName;)
+ (NSString * _Nonnull)hashName SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull payment;)
+ (NSString * _Nonnull)payment SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull paymentRelatedDetailForMobileSDK;)
+ (NSString * _Nonnull)paymentRelatedDetailForMobileSDK SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull vasForMobileSDK;)
+ (NSString * _Nonnull)vasForMobileSDK SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull checkIsDomestic;)
+ (NSString * _Nonnull)checkIsDomestic SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull getBinInfo;)
+ (NSString * _Nonnull)getBinInfo SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull olaEligibility;)
+ (NSString * _Nonnull)olaEligibility SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull validateVPA;)
+ (NSString * _Nonnull)validateVPA SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull getEmiAmountAccordingToInterest;)
+ (NSString * _Nonnull)getEmiAmountAccordingToInterest SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull eligibleBinsForEMI;)
+ (NSString * _Nonnull)eligibleBinsForEMI SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull deleteUserCard;)
+ (NSString * _Nonnull)deleteUserCard SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull offerDetail;)
+ (NSString * _Nonnull)offerDetail SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull getCheckoutDetails;)
+ (NSString * _Nonnull)getCheckoutDetails SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull mcpLookup;)
+ (NSString * _Nonnull)mcpLookup SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull checkBalance;)
+ (NSString * _Nonnull)checkBalance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSNotification (SWIFT_EXTENSION(PayUCheckoutProKit))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSNotificationName _Nonnull payuRefreshSodexoView;)
+ (NSNotificationName _Nonnull)payuRefreshSodexoView SWIFT_WARN_UNUSED_RESULT;
@end



@class UIViewController;
@class PayUPaymentParam;
@class PayUCheckoutProConfig;
@protocol PayUCheckoutProDelegate;
@class BaseLayer;

SWIFT_CLASS("_TtC18PayUCheckoutProKit15PayUCheckoutPro")
@interface PayUCheckoutPro : NSObject
+ (void)openOn:(UIViewController * _Nonnull)parentVC paymentParam:(PayUPaymentParam * _Nonnull)paymentParam config:(PayUCheckoutProConfig * _Nullable)config delegate:(id <PayUCheckoutProDelegate> _Nonnull)delegate;
+ (void)start;
+ (void)openOn:(UIViewController * _Nonnull)parentVC apiLayer:(BaseLayer * _Nonnull)apiLayer delegate:(id <PayUCheckoutProDelegate> _Nonnull)delegate;
+ (void)sdkCrash;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSNumber;

SWIFT_PROTOCOL("_TtP18PayUCheckoutProKit23PayUCheckoutProDelegate_")
@protocol PayUCheckoutProDelegate
- (void)onPaymentSuccessWithResponse:(id _Nullable)response;
- (void)onPaymentFailureWithResponse:(id _Nullable)response;
- (void)onPaymentCancelWithIsTxnInitiated:(BOOL)isTxnInitiated;
- (void)onError:(NSError * _Nullable)error;
- (void)generateHashFor:(NSDictionary<NSString *, NSString *> * _Nonnull)param onCompletion:(void (^ _Nonnull)(NSDictionary<NSString *, NSString *> * _Nonnull))onCompletion;
@end


@class UIColor;
@class NSCoder;

SWIFT_CLASS("_TtC18PayUCheckoutProKit10PayUPopTip")
@interface PayUPopTip : UIView
/// The <code>UIColor</code> of the text
@property (nonatomic, strong) UIColor * _Nonnull textColor;
/// The <code>NSTextAlignment</code> of the text
@property (nonatomic) NSTextAlignment textAlignment;
/// The <code>UIColor</code> for the poptip’s background
@property (nonatomic, strong) UIColor * _Nonnull bubbleColor;
/// The <code>UIColor</code> for the poptip’s bordedr
@property (nonatomic, strong) UIColor * _Nonnull tipBorderColor;
/// The width for the poptip’s border
@property (nonatomic) CGFloat tipBorderWidth;
/// The <code>Double</code> with the poptip’s border radius
@property (nonatomic) CGFloat tipCornerRadius;
/// The <code>BOOL</code> that determines wether the poptip is rounded. If set to <code>true</code> the radius will equal <code>frame.height / 2</code>
@property (nonatomic) BOOL isRounded;
/// The <code>UIColor</code> with the poptip’s shadow color
@property (nonatomic, strong) UIColor * _Nonnull tipShadowColor;
/// The <code>CGSize</code> with the poptip’s shadow offset
@property (nonatomic) CGSize tipShadowOffset;
/// The <code>Float</code> with the poptip’s shadow radius
@property (nonatomic) float tipShadowRadius;
/// The <code>Float</code> with the poptip’s shadow opacity
@property (nonatomic) float tipShadowOpacity;
/// Holds the offset between the poptip and origin
@property (nonatomic) CGFloat offset;
/// Holds the CGFloat with the padding used for the inner text
@property (nonatomic) CGFloat padding;
/// Holds the insets setting for padding different direction
@property (nonatomic) UIEdgeInsets edgeInsets;
/// Holds the CGSize with the width and height of the arrow
@property (nonatomic) CGSize arrowSize;
/// CGfloat value that determines the radius of the vertex for the pointing arrow
@property (nonatomic) CGFloat arrowRadius;
/// Holds the NSTimeInterval with the duration of the revealing animation
@property (nonatomic) NSTimeInterval animationIn;
/// Holds the NSTimeInterval with the duration of the disappearing animation
@property (nonatomic) NSTimeInterval animationOut;
/// Holds the NSTimeInterval with the delay of the revealing animation
@property (nonatomic) NSTimeInterval delayIn;
/// Holds the NSTimeInterval with the delay of the disappearing animation
@property (nonatomic) NSTimeInterval delayOut;
/// Holds the NSTimeInterval with the duration of the action animation
@property (nonatomic) NSTimeInterval actionAnimationIn;
/// Holds the NSTimeInterval with the duration of the action stop animation
@property (nonatomic) NSTimeInterval actionAnimationOut;
/// Holds the NSTimeInterval with the delay of the action animation
@property (nonatomic) NSTimeInterval actionDelayIn;
/// Holds the NSTimeInterval with the delay of the action animation stop
@property (nonatomic) NSTimeInterval actionDelayOut;
/// CGfloat value that determines the leftmost margin from the screen
@property (nonatomic) CGFloat edgeMargin;
/// Holds the offset between the bubble and origin
@property (nonatomic) CGFloat bubbleOffset;
/// Holds the offset between the center of the bubble and the arrow
@property (nonatomic) CGFloat arrowOffset;
/// Color of the mask that is going to dim the background when the pop up is visible
@property (nonatomic, strong) UIColor * _Nonnull maskColor;
/// Flag to enable or disable background mask
@property (nonatomic) BOOL shouldShowMask;
/// Flag to enable or disable the checks that make sure that the tip does not extend over the container
@property (nonatomic) BOOL constrainInContainerView;
/// A boolean value that determines whether the poptip is dismissed on tap.
@property (nonatomic) BOOL shouldDismissOnTap;
/// A boolean value that determines whether to dismiss when tapping outside the poptip.
@property (nonatomic) BOOL shouldDismissOnTapOutside;
/// A boolean value that determines whether to consider the originating frame as part of the poptip,
/// i.e wether to call the <code>tapHandler</code> or the <code>tapOutsideHandler</code> when the tap occurs in the <code>from</code> frame.
@property (nonatomic) BOOL shouldConsiderOriginatingFrameAsPopTip;
/// A boolean value that determines whether to dismiss when swiping outside the poptip.
@property (nonatomic) BOOL shouldDismissOnSwipeOutside;
/// A boolean value that determines if the action animation should start automatically when the poptip is shown
@property (nonatomic) BOOL startActionAnimationOnShow;
/// Custom draw override
/// \param rect the rect occupied by the view
///
- (void)drawRect:(CGRect)rect;
/// Hides the poptip and removes it from the view. The property <code>isVisible</code> will be set to <code>false</code> when the animation is complete and the poptip is removed from the parent view.
/// \param forced Force the removal, ignoring running animations
///
- (void)hideWithForced:(BOOL)forced;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC18PayUCheckoutProKit20PaymentParamConstant")
@interface PaymentParamConstant : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull udf1;)
+ (NSString * _Nonnull)udf1 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull udf2;)
+ (NSString * _Nonnull)udf2 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull udf3;)
+ (NSString * _Nonnull)udf3 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull udf4;)
+ (NSString * _Nonnull)udf4 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull udf5;)
+ (NSString * _Nonnull)udf5 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull merchantAccessKey;)
+ (NSString * _Nonnull)merchantAccessKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull sourceId;)
+ (NSString * _Nonnull)sourceId SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull paymentType;)
+ (NSString * _Nonnull)paymentType SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull cardType;)
+ (NSString * _Nonnull)cardType SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC18PayUCheckoutProKit23PaymentResponseConstant")
@interface PaymentResponseConstant : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull payuResponse;)
+ (NSString * _Nonnull)payuResponse SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull merchantResponse;)
+ (NSString * _Nonnull)merchantResponse SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end












#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
